#include <vector>
#include "ws/requests/IRequests.hpp"
#include "ws/requests/RequestsBuilder.hpp"

namespace BNB::WS::General
{
    class Ping: public IRequest
    {
    public:
        Ping();
        std::string dump() const override;
    };

    class CheckServerTime: public IRequest
    {
    public:
        CheckServerTime();
        std::string dump() const override;
    };

    class ExchangeInfo: public IRequest
    {
    public:
        ExchangeInfo();
        std::string dump() const override;
    private:
    };
}