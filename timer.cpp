#include <iostream>
#include <ctime>
#include <unistd.h>
#include "timer.hpp"
using namespace std;

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

void Timer::start_timer() {
    is_running = true;
    time(&start_time);
    cout << "start time is " << start_time << endl;
}

void Timer::stop_timer() {
    if(is_running == false) {
        cout << "The timer is not running yet. Please start a timer before trying to stop it." << endl;
        exit(0); 
    }
    is_running = false;
    time(&end_time);

    cout << "stop time is " << end_time << endl;
}

void Timer::elapsed() {

    if(start_time == 0) {
        cout << "Cannot calculate time elapsed until you have started a timer" << endl;
        return;
    }

    if(end_time == 0) {
        cout << "Cannot calculate time elapsed until you have stopped the timer" << endl;
        return;
    }

    time_elapsed = end_time - start_time;

}




