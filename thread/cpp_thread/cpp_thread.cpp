#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

int number;
std::mutex mtx;


void print_in_sometime(int times, std::string thread_name){
    // mtx.lock();
    for (int i = 0; i < times; i++)
    {
        number++;
    }
    // mtx.unlock();
}


int main(int argc, const char** argv) {
    std::thread t1(print_in_sometime, 10000, "thread1");
    std::thread t2(print_in_sometime, 10000, "thread2");
    t1.join();
    t2.join();
    std::cout << number << std::endl;

    return 0;
}

