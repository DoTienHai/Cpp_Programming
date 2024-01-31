#include <iostream>
#include <mutex>
using namespace std;

class Single
{
private:
    /* data */
    static Single *instancePtr;
    string data;
    // static mutex mLocker;
    Single(string newData)
    {
        data = newData;
    };

public:
    static Single *getInstancePtr(string newData)
    {
        // mLocker.lock();
        if (instancePtr == nullptr)
        {
            instancePtr = new Single(newData);
        }
        // mLocker.unlock();
        return instancePtr;
    }

    string getData()
    {
        return data;
    }
    void setData(string newData)
    {
        data = newData;
    }

    ~Single()
    {
        delete instancePtr;
        instancePtr = nullptr;
    };
};

Single *Single::instancePtr = nullptr;

/* 2 way to solver singleton with multithread */
// Single *Single::instancePtr = new Single("hello"); // creat an instance at beginning
// mutex Single::mLocker;   // creat a lock

int main()
{
    Single *S1 = Single::getInstancePtr("S1 data.");
    Single *S2 = Single::getInstancePtr("S2 data.");
    cout << S1->getData() << endl;
    cout << S2->getData() << endl;
    S2->setData("S2 set data.");
    cout << S1->getData() << endl;
    cout << S2->getData() << endl;
    return 0;
}