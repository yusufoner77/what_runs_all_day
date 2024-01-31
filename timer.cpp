#include <iostream>
#include <ctime>
#include <unistd.h>
#include "timer.hpp"
using namespace std;

// I was not able to get this lab to run correctly, but here is as far as I got.


Timer timer;


void Timer::get_is_running() {
    if (is_running == true) {
        cout << "The timer is running!" << endl;
    }
    else {
        cout << "The timer is stopped!" << endl;
    }
}

int Timer::get_time_elapsed() {
    return time_elapsed;
}

int Timer::start_timer() {
    is_running = true;
    time(&start_time);
    return start_time;
}

int Timer::stop_timer() {
    is_running = false;
    time(&end_time);

    return end_time;
}

int Timer::elapsed() {
    time_elapsed = end_time - start_time;

    return time_elapsed;
}




