#include <iostream>
#include <ctime>
#include <unistd.h>
#include "timer.hpp"
using namespace std;


// I was not able to get this lab to run correctly, but here is as far as I got.


int main() {

Timer timer;

timer.get_is_running();

cout << "start time is " << timer.start_timer() << endl;
timer.get_is_running();

sleep(5);

cout << "stop time is " << timer.stop_timer() << endl;
timer.get_is_running();

timer.elapsed();
cout << "That took " << timer.get_time_elapsed() << " seconds." << endl;

}