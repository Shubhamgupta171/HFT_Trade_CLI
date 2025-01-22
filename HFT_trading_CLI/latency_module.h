#ifndef LATENCY_MODULE_H
#define LATENCY_MODULE_H

#include <chrono> // Library for measuring time intervals
#include <string> // Library to use string data type

// LatencyModule class: Used to measure the time taken (latency) for performing an action
class LatencyModule {
public:
    // Starts a timer and returns the current time
    static std::chrono::high_resolution_clock::time_point start();
    // Ends the timer and calculates the latency (total time taken for the action)
    // Parameters:
    // - start_time: The time when the timer was started
    // - action_name: The name of the action for which latency is being measured
    static void end(const std::chrono::high_resolution_clock::time_point& start_time, const std::string& action_name);
};

#endif // LATENCY_MODULE_H
