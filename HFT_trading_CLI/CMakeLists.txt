# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Define the project name and set the C++ standard to C++17
project(HFT_WebSocket)
set(CMAKE_CXX_STANDARD 17)

# Specify the path where the Boost library is installed
# (Replace "C:/boost_1_87_0" with the actual path where Boost is located on your system)
set(BOOST_ROOT "C:/boost_1_87_0")

# Find and include the necessary packages
# (Boost is required for various C++ utilities, and OpenSSL is required for secure WebSocket connections)
find_package(Boost REQUIRED)
find_package(OpenSSL REQUIRED)

# Add the main executable and list all source files needed for the project
add_executable(deribit_trader
    deribit_trader.cpp        # Main application file
    websocket_handler.cpp     # WebSocket handling logic
    trade_execution.cpp       # Trade execution logic
    latency_module.cpp        # Module for latency calculation
)

# Set the output directory for the compiled executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include the Boost library headers in the project
target_include_directories(deribit_trader PRIVATE ${Boost_INCLUDE_DIRS})

# Link the Boost and OpenSSL libraries to the executable
# (This ensures the application has access to these libraries during runtime)
target_link_libraries(deribit_trader PRIVATE ${Boost_LIBRARIES} OpenSSL::SSL)




