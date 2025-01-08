#include "ws/StreamsClient.hpp"


int main()
{
    BNB::WS::StreamsClient streamsClient("wss://testnet.binance.vision/ws");
    streamsClient.start();
    streamsClient.subscribeToStreams({"btcusdt@trade"});
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}