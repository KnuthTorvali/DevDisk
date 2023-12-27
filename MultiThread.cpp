#include <thread>
#include <iostream>

using namespace std;

class ThreadManager {
public:
    ThreadManager() {}

    void RunThread(int threadNum) {
        cout << "Thread " << threadNum << " is running." << endl;
    }

    void startThreads() {
      
        thread1 = thread(&ThreadManager::RunThread, this, 1);
        thread2 = thread(&ThreadManager::RunThread, this, 2);
    }

    void joinThreads() {
        thread1.join();
        thread2.join();
    }

private:
    thread thread1;
    thread thread2;
};
