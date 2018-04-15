#include <iostream>
#include <thread>
#include <algorithm>


void threadFunction() {
    std::cout << "Hello from thread\n";
}

int main() {
    //std::thread th(&threadFunction);
    std::vector<std::thread> workers;
    for (int i = 0; i < 10; ++i) {
    workers.push_back(std::thread([i]()
            {
            std::cout << "Hello from thread " << i << "\n";
            }));
    }
    std::cout << "Hello from main\n";
    //th.join();
    std::for_each(workers.begin(), workers.end(), [](std::thread& th){
            th.join();
            });
    return 0;
}
