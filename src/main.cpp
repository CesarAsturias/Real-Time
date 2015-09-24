// Hello world in Multi-thread mode
#include <iostream>
// The functions and classes for managing threads are declared in 
// <thread>
#include <thread>

// Every thread has to have an initial function, which is where 
// the new thread of execution begins. For the initial thread in an 
// application, this is main(), but for every other thread it's 
// specified in the constructor of a std::thread object. In this 
// case, the function hello is the initial function.
// This program launchs a whole new thread to call hello.

void hello()
{
    std::cout << "Hello concurrent World\n";
}

int main()
{
    std::thread t(hello);
    // If we don't call join, the main thread (main()) would merrely
    // continue to the end.
    t.join();
}
