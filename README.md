# what_runs_all_day

PROBLEM STATEMENT:
Create a Timer object that allows a user to start a timer, stop a timer, and return the elapsed time.


ACCEPTANCE CRITERIA:
- Create a Timer class with start(...), stop(...), and elapsed(...) methods. These methods will start and stop a timer via the system clock as well as return the elapsed time.

- When you first create a Timer object, it should be in the ‘stopped’ state and the elapsed time should be zero.

- The elapsed(...) method should return the elapsed time, reported in whole seconds.

- Do not call the functions localtime or asctime from the standard C library ctime in this problem.

- Write a driver program and / or set of unit tests that test the Timer class. Note, you might find it difficult (impossible?) to unit test every method in your class at the moment. That’s ok! Test what you can and then reflect on your strategy in the Thought Provoking Questions below.