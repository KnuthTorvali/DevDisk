#include <thread>
#include <iostream>

class ThreadManager {
public:
    ThreadManager() {}

    void RunThread(int threadNum) {
        std::cout << "Thread " << threadNum << " is running." << std::endl;
    }

    void startThreads() {
      
        thread1 = std::thread(&ThreadManager::RunThread, this, 1);
        thread2 = std::thread(&ThreadManager::RunThread, this, 2);
    }

    void joinThreads() {
        thread1.join();
        thread2.join();
    }

private:
    std::thread thread1;
    std::thread thread2;
};
