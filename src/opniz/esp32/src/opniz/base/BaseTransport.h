#ifndef OPNIZ_BASE_TRANSPORT_H
#define OPNIZ_BASE_TRANSPORT_H

#include "./transports/Transport.h"
#include "./transports/TransportCreator.h"

class BaseTransport : public Transport {
private:
    Transport* _transport;
    
public:
    BaseTransport(const char* address, const uint16_t port, const String id, const Protocol protocol);
    virtual ~BaseTransport() = default;
    
    void init(std::function<String(String)> rpcHandlerFunction);
    
    void connect();
    void close();
    
    boolean send(const String rpcRequest);
    void receive();
    
    boolean isConnected();
    void keepAlive();
};

#endif
