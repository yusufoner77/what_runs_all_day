using namespace std;

// I was not able to get this lab to run correctly, but here is as far as I got.


class Timer {

    bool is_running;
    int time_elapsed;

public:
    int start_time;
    int end_time;
    bool get_is_running();
    int get_time_elapsed();
    int start_timer();
    int stop_timer();    
    int elapsed();

    Timer(){
        is_running = 0;
        time_elapsed = 0;
    }
};