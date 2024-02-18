using namespace std;

class Timer {

    bool is_running;
    int time_elapsed;

public:
    time_t start_time;
    time_t end_time;
    void get_is_running();
    int get_time_elapsed();
    void start_timer();
    void stop_timer();    
    void elapsed();
    void pretty_print();

    Timer(){
        is_running = 0;
        time_elapsed = 0;
    }
};