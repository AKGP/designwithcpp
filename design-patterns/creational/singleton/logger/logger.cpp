#include <iostream>
#include <mutex>
#include "logger.h"
using namespace std;
int Logger::ctr = 0;
Logger *Logger::instance = nullptr;
mutex Logger::mtx;

Logger::Logger()
{
    ctr++;
    cout << ctr << " instance of logger created!\n";
}

void Logger::Log(string message)
{
    cout << "LOG:" << message << endl;
}

Logger *Logger::getInstance()
{
    // Double check as locking is expensive task
    if (instance == nullptr)
    {
        mtx.lock();
        if (instance == nullptr)
        {
            instance = new Logger();
        }
        mtx.unlock();
    }

    return instance;
}