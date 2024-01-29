#include <iostream>
#include <ctime>
#include <unistd.h>
#include "timer.hpp"
using namespace std;

// I was not able to get this lab to run correctly, but here is as far as I got.


Timer timer;

bool Timer::get_is_running() {
    return is_running;
}

int Timer::get_time_elapsed() {
    return time_elapsed;
}

int Timer::start_timer() {
    is_running = true;
    time_t start_time;
    time(&start_time);

    return start_time;
}

int Timer::stop_timer() {
    is_running = false;
    time_t end_time;
    time(&end_time);

    return end_time;
}

int Timer::elapsed() {
    time_elapsed = end_time - start_time;

    return time_elapsed;
}




