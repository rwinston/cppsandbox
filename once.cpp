#include<thread>
#include<iostream>

int main() {

    std::once_flag flag;
    std::call_once(flag,[](){std::cout << "hi" << std::endl;});

    return 0;
}
