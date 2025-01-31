# Description
This repo aims to build a simple to use client library for Binance.       
Client supports FIX, Websockets and Rest APIs.   
Order Entry, Market Data, Drop Copy (FIX) connections to be supported.   
Performance and ease of use are key.    

# Submodules :
## Websocketspp for websocket usage. 
```
https://github.com/zaphoyd/websocketpp  
```

## Nlohmann Json for json parsing and build.
```
https://github.com/nlohmann/json  
```

## Quill for logging.
```
https://github.com/odygrd/quill  
```


# HOW TO:
# Install dependencies : 
### Install openssl
```
sudo yum install openssl
```
### Install POCO
```
sudo yum install poco-devel poco-foundation poco-net poco-netssl poco-crypto
```
### Install Boost
```
sudo yum install boost
```
## Install FIX8: 
```
git clone git@github.com:fix8/fix8.git   
./bootstrap   
./configure --enable-ssl --enable-debug
make  
sudo make install  
```
## Install libsodium
```
wget https://download.libsodium.org/libsodium/releases/libsodium-1.0.20-stable.tar.gz
./configure 
make && make check
sudo make install
```

## Install stunnel
```
sudo dnf install stunnel
```

# DONE :
[FIX] Build basic client.   
[FIX] Connect TLS to binance.   
[FIX] Generate ED25519 signature.   
[FIX] add unit tests.   
[FIX] separate client session and client router.     
[WS_API] Implement base.   
[UTILS] refactor utils and add hmac.   
[REST_CLIENT] Implement.   
[WS_STREAMS] test user streams.   
[WS_STREAMS] Refactor streams client.   
[WS_API] Default constructor for all requests, parameter addition operator.  
[WS_API] Implement critical messages : Exchange info.    
[WS_API] Implement critical messages : Place order, Test Order, Cancel All Orders.   

# TODO : 
[CRYPTO] Add support for ed25519 key loading.   
[UTESTS] Unit tests for signatures, payload generation, Key loading.   
[UTESTS] Unit tests for .   
[LIBRARY] Export project as library and use in RTEX.   
[LIBRARY] Make version 0.0 Beta.   
[WS_ALL] Enforce parameters for request types.  
[WS_API] Implement critical messages : Logon and no signature on messages once logged in.   
[FIX] Clean up architecture and reorganize code gen.   
[ARCHITECTURE] Feeder and broker wrapper.   
[WS_STREAMS] Impelemnt critical messages maybe ?.      
[DEPENDECIES] User boost beast instead of websocketspp.   
[FIX] Implement messages.  
[WS] Feeder Broker Implement.   
[FIX] Feeder Broker Implement.   

make the lib more portable.  
git pull binance xml.   
add start script with source creds and stunnel hooks.   
change namespaces for broker.  
implement feeder example.   
native ssl using fix8 pull request.   
more unit tests.

# ISSUES:
## SSL configuration :
https://fix8engine.atlassian.net/wiki/spaces/FX/pages/15368200/4.+Configuring+SSL+Clients+and+Servers.   
Due to the tls issue with the POCO library stunnel is used


# Read Docs: 
https://developers.binance.com/docs/binance-spot-api-docs/testnet/fix-api.   
https://fix8.org/howitworks.html.  
https://fix8.org/fix8/html/index.html.   