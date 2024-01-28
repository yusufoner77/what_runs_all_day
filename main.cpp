#include <iostream>
#include <ctime>
#include <unistd.h>
#include "timer.hpp"
using namespace std;

int main() {

Timer timer;

cout << "start time is " << timer.start_timer() << endl;
cout << "timer is " << timer.get_is_running() << endl;

sleep(10);

cout << "stop time is " << timer.stop_timer() << endl;
cout << "timer is " << timer.get_is_running() << endl;

// cout << "start time was " << timer.start_time << endl;
cout << "That took " << timer.stop_timer() - timer.start_timer() << " seconds." << endl;

}