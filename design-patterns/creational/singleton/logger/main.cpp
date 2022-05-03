#include <iostream>
#include "logger.h"
#include <thread>

using namespace std;

void userLogger1()
{
    Logger *logger1 = Logger::getInstance();
    logger1->Log("Yo logger1 into multithreading");
}
void userLogger2()
{
    Logger *logger2 = Logger::getInstance();
    logger2->Log("Yo logger2 : into multithreading");
}

int main()
{
    // NORMAL SINGLETON
    // Logger *logger1 = Logger::getInstance();
    // Logger *logger2 = Logger::getInstance();

    // logger1->Log("Hey I am log 1\n");
    // logger2->Log("Hey I am logger 2\n");
    //

    // MULTITHREADING
    thread t1(userLogger1);
    thread t2(userLogger2);

    t1.join();
    t2.join();

    //
    return 0;
}

// run command :  g++ *.cpp -pthread -o out
