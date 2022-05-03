

#include <string>
#include <mutex>
using namespace std;

class Logger
{
    static mutex mtx;
    static int ctr;
    static Logger *instance;
    Logger();

public:
    static Logger *getInstance();
    void Log(string msg);
};