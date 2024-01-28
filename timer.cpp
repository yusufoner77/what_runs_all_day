#include <iostream>
#include <ctime>
#include <unistd.h>
#include "timer.hpp"
using namespace std;

Timer timer;

bool Timer::get_is_running() {
    return is_running;
}

time_t Timer::get_time_elapsed() {
    return time_elapsed;
}

time_t Timer::start_timer() {
    is_running = true;
    time_t start_time;
    time(&start_time);

    return start_time;
}

time_t Timer::stop_timer() {
    is_running = false;
    time_t end_time;
    time(&end_time);

    return end_time;
}

time_t Timer::elapsed() {
    time_elapsed = end_time - start_time;

    return time_elapsed;
}




