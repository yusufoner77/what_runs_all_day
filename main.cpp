#include <iostream>
#include <ctime>
#include <unistd.h>
#include "timer.hpp"
using namespace std;


int main() {

Timer timer;

timer.start_time = 0;
timer.end_time = 0;

// This will test if we try to run elapsed on a timer that hasn't started yet.
cout << "Let's try to determine time elapsed, even though the timer hasn't started..." << endl;
timer.elapsed();
cout << endl << endl;


// This will test the code if it runs as intended
timer.get_is_running();
cout << endl;

timer.start_timer();
timer.get_is_running();
cout << endl;

sleep(5);

timer.stop_timer();
timer.get_is_running();
cout << endl;

timer.elapsed();
cout << "That took " << timer.get_time_elapsed() << " seconds." << endl << endl;


//This will test if you try to stop a timer that hasn't started
cout << endl;
timer.get_is_running();
cout << endl;

cout << "Now if we try to stop the timer..." << endl;

timer.stop_timer();


}