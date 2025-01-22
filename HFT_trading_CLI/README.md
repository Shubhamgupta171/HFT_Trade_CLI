# Deribit Trading CLI Application

A high frequency and low latency command-line application for trading on the Deribit cryptocurrency exchange using C++17 and Boost.
## Features

1.Connects to Deribit API v2 in real-time using WebSocket

2.Fast order execution and market data updates

3.Manage orders (place, cancel, modify)

4.Monitor live order books

5.Check current trading positions

6.Subscribe to live market data

7.Built with modern C++17 for speed and reliability

8.Optimized for low-latency performance

## Prerequisites

Install required dependencies on Ubuntu:

```bash
# Update Homebrew
brew update

# Install CMake
brew install cmake

# Install Boost libraries
brew install boost

# Install OpenSSL
brew install openssl

# Install nlohmann-json
brew install nlohmann-json
```

## Building the Project

1. Clone the repository:
```bash
git clone <repository-url>
cd HFT_trading_CLI
```

2. Create build directory:
```bash
mkdir build
cd build
```

3. Build the project:
```bash
cmake ..
make
```

## Running the Application

Execute the built binary:
```bash
./deribit_trader
```

## Usage

The application provides a command-line interface with the following options:

1. Place Order - Create a new market or limit order by specifying the details.

2.Cancel Order - Cancel an existing order by providing its ID.

3.Modify Order - Update the price or quantity of an existing order.

4.Get Order Book - View the current market order book.

5.View Current Positions - Check your open trading positions.

6.Subscribe to Order Book Updates - Receive real-time updates about the market.

7.Exit - Quit the application.

## Performance Features

- Asynchronous WebSocket communication
- Memory-optimized data structures
- Low-latency market data processing
- Real-time latency monitoring

## Error Handling

The application includes comprehensive error handling for:
- Network connectivity issues
- API authentication failures
- Invalid order parameters
- Market data processing errors

## Configuration

API credentials are stored in `api_credentials.h`. Update with your own credentials:
```cpp
const std::string CLIENT_ID = "your_client_id";
const std::string CLIENT_SECRET = "your_client_secret";
```
