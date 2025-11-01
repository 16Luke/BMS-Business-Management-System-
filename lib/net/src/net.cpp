#include "net.h"



ConnState Connection::getState() const {
  return state;
}

void Connection::connect() {
  if (state == ConnState::DISCONNECTED) {
    state = ConnState::CONNECTING;
        // Simulate connection establishment
        state = ConnState::CONNECTED;
    }
}

void Connection::disconnect() {
  if (state == ConnState::CONNECTED) {
    state = ConnState::DISCONNECTING;
        // Simulate disconnection process
      state = ConnState::DISCONNECTED;
    }
}
