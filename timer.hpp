using namespace std;

class Timer {

    bool is_running;
    time_t time_elapsed;
    // int start_time;
    // int end_time;

public:
    time_t start_time;
    time_t end_time;
    bool get_is_running();
    time_t get_time_elapsed();
    time_t start_timer();
    time_t stop_timer();    
    time_t elapsed();

    Timer(){
        is_running = 0;
        time_elapsed = 0;
    }
};