
enum SPI_OPCODES {
  SPI_NOOP = 0,
  SPI_RESET = 1,
  SPI_START_ADVERTISING = 2,
  SPI_STOP_ADVERTISING = 3,
  SPI_CONNECT = 4, // CONNECT or CONNECTED
  SPI_DISCONNECT = 5, // DISCONNECT or DISCONNECTED
  SPI_ADD_SERVICE = 6,
  SPI_ADD_CHARACTERISTIC = 7,
  SPI_NOTIFY = 8
};
