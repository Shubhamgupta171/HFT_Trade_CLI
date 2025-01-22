#include "latency_module.h"  // Include the header file for the LatencyModule class
#include <iostream>          // Include for input/output operations

// Function to start the timer
// This function returns the current high-resolution time point
std::chrono::high_resolution_clock::time_point LatencyModule::start() {
    return std::chrono::high_resolution_clock::now(); // Capture and return the current time
}
// Function to end the timer and calculate latency
// Takes the start time and the name of the action as inputs
void LatencyModule::end(const std::chrono::high_resolution_clock::time_point& start_time, const std::string& action_name) {
    
    // Capture the end time
    auto end_time = std::chrono::high_resolution_clock::now();
    
    // Calculate the time difference (latency) between start and end
    std::chrono::duration<double> latency = end_time - start_time;

    // Print the latency in seconds along with the action name
    std::cout << action_name << " Latency: " << latency.count() << " seconds" << std::endl;
}
