#include <iostream>
#include <vector>
using namespace std;

class ObserverBase
{
private:
    /* data */
    string name;

public:
    ObserverBase() {}
    ObserverBase(string newName) : name(newName) {}
    virtual ~ObserverBase() {}

    string getName()
    {
        return name;
    }
    virtual void notification(string msg) = 0;
};

class Observer1 : public ObserverBase
{
private:
    /* data */

public:
    Observer1(string newName) : ObserverBase(newName) {}
    ~Observer1() {}

    void notification(string msg)
    {
        cout << "Observer 1 notification: " << msg << " for " << getName() << endl;
    }
};

class Observer2 : public ObserverBase
{
private:
    /* data */

public:
    Observer2(string newName) : ObserverBase(newName) {}
    ~Observer2() {}

    void notification(string msg)
    {
        cout << "Observer 2 notification: " << msg << " for " << getName() << endl;
    }
};

class ObserverController
{
private:
    /* data */
    vector<ObserverBase *> observerTable;

public:
    ObserverController(/* args */) {}
    ~ObserverController() {}

    void regisObserver(ObserverBase *newObserver)
    {
        observerTable.push_back(newObserver);
    }

    void removeObserver(string name)
    {
        for (vector<ObserverBase *>::iterator observerIt = observerTable.begin(); observerIt != observerTable.end(); observerIt++)
        {
            if ((*observerIt)->getName() == name)
            {
                observerTable.erase(observerIt);
                return;
            }
        }
    }

    void notification(string msg)
    {
        for (ObserverBase *observerPtr : observerTable)
        {
            observerPtr->notification(msg);
        }
    }
};

class Door
{
private:
    /* data */
    ObserverController *observerController;
    string status;

public:
    Door(ObserverController *ob) : observerController(ob) {}
    ~Door() {}

    ObserverController *getObserverController()
    {
        return observerController;
    }

    void setStatus(string newStatus)
    {
        status = newStatus;
        observerController->notification("The door has a new status: \"" + newStatus + "\".");
    }
    string getStatus()
    {
        return status;
    }
};

int main()
{
    Door myDoor(new ObserverController);
    cout << "No observer: " << endl;
    myDoor.setStatus("hello");

    cout << endl
         << "regis 3 observer: " << endl;
    myDoor.getObserverController()->regisObserver(new Observer1("MY SON"));
    myDoor.getObserverController()->regisObserver(new Observer2("MY HUSBAND"));
    myDoor.getObserverController()->regisObserver(new Observer1("MY NEIGHBORHOOD"));
    myDoor.setStatus("my husband back!");

    cout << endl
         << "remove MY NEIGHBORHOOD observer: " << endl;
    myDoor.getObserverController()->removeObserver("MY NEIGHBORHOOD");
    myDoor.setStatus("my son back!");

    return 0;
}