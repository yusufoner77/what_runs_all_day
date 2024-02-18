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

void Timer::pretty_print() {
    if (get_time_elapsed() == 0) {
        cout << "No time has passed" << endl;
    }

    if (get_time_elapsed() > 0 && get_time_elapsed() < 60) {
        cout << get_time_elapsed() << " seconds have passed." << endl;
    }

    if (get_time_elapsed() % 60 == 0 && get_time_elapsed() >= 60 && get_time_elapsed() < 3600) {
        cout << get_time_elapsed() / 60 << " minutes has passed." << endl;
    }

    if (get_time_elapsed() % 60 != 0 && get_time_elapsed() > 60 && get_time_elapsed() < 3600) {
        cout << get_time_elapsed() / 60 << " minutes and " << get_time_elapsed() % 60 << " seconds have passed." << endl;
    }

    if (get_time_elapsed() % 3600 == 0 && get_time_elapsed() >= 3600) {
        cout << get_time_elapsed() / 3600 << " hours has passed." << endl;
    }

    if (get_time_elapsed() % 3600 != 0 && get_time_elapsed() > 3600) {
        cout << get_time_elapsed() / 3600 << " hours, " << (get_time_elapsed() % 3600) / 60 << " minutes, and " << (get_time_elapsed() % 3600) % 60 << " seconds have passed." << endl;
    }
}




