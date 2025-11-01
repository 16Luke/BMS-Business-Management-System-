#ifndef NET_H
#define NET_H

enum class ConnState {
    DISCONNECTED,
    CONNECTING,
    CONNECTED,
    DISCONNECTING
};

class Connection {
    private:
        ConnState state = ConnState::DISCONNECTED;
    public:
        
        ConnState getState() const;
        void connect();
        void disconnect();
};

#endif // NET_H