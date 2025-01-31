#pragma once

#include <websocketpp/client.hpp>
#include <websocketpp/config/asio_client.hpp>
#include <memory>
#include <string>
#include <condition_variable>
#include <mutex>

using wsppclient = websocketpp::client<websocketpp::config::asio_tls_client>;
using sslcontext = websocketpp::lib::asio::ssl::context;

class WebSocketListener {
public:
    WebSocketListener();
    virtual ~WebSocketListener();

    void connect(const std::string& uri);
    void startClient();
    void stopClient();
    void writeWS(const std::string& message);

protected:
    virtual void onOpen(websocketpp::connection_hdl hdl);
    virtual void onClose(websocketpp::connection_hdl hdl);
    virtual void onFail(websocketpp::connection_hdl hdl);
    virtual void onMessage(websocketpp::connection_hdl hdl, wsppclient::message_ptr msg) = 0;

    std::shared_ptr<sslcontext> on_tls_init();
    websocketpp::connection_hdl hdl_;

private:
    std::condition_variable connectionCond_;
    bool isConnected_ = false;
    std::mutex connectionMutex_;
    bool use_tls_;
    wsppclient tls_client_;
    wsppclient::connection_ptr con_;
    std::thread fws_thread_;
    std::atomic<bool> frunning_;

};

