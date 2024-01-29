#include <iostream>
#include <ctime>
#include <unistd.h>
#include "timer.hpp"
using namespace std;


// I was not able to get this lab to run correctly, but here is as far as I got.


int main() {

Timer timer;

cout << "start time is " << timer.start_timer() << endl;
cout << "timer is " << timer.get_is_running() << endl;

sleep(10);

cout << "stop time is " << timer.stop_timer() << endl;
cout << "timer is " << timer.get_is_running() << endl;

// cout << "start time was " << timer.start_time << endl;
cout << "That took " << timer.get_time_elapsed() << " seconds." << endl;

}