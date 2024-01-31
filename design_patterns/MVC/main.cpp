#include <iostream>
#include <vector>
using namespace std;

class Model
{
private:
    vector<string> tasks;

public:
    void addTask(const string &task)
    {
        tasks.push_back(task);
    }

    vector<string> getTasks()
    {
        return tasks;
    }
};

class ViewBase
{
private:
    /* data */
public:
    ViewBase(/* args */){};
    virtual ~ViewBase(){};

    virtual void displayTasks(const vector<string> &tasks) = 0;
};

class View1 : public ViewBase
{
private:
    /* data */
public:
    View1(/* args */){};
    ~View1(){};

    void displayTasks(const vector<string> &tasks)
    {
        cout << " VIEW 1: " << endl;
        cout << "Tasks:\n";
        for (const auto &task : tasks)
        {
            cout << "- " << task << '\n';
        }
        cout << "----------------------\n";
    }
};

class View2 : public ViewBase
{
private:
    /* data */
public:
    View2(/* args */){};
    ~View2(){};

    void displayTasks(const vector<string> &tasks)
    {
        cout << " VIEW 2: " << endl;
        cout << "Tasks:\n";
        int i = 1;
        for (const auto &task : tasks)
        {
            cout << i << ". " << task << '\n';
            i++;
        }
        cout << "----------------------\n";
    }
};

class Controller
{
private:
    Model *model;
    ViewBase *view;

public:
    Controller(Model *m, ViewBase *v) : model(m), view(v) {}
    ~Controller()
    {
        model = nullptr;
        view = nullptr;
    }
    void addTask(const string &task)
    {
        model->addTask(task);
        updateView();
    }
    void updateView()
    {
        view->displayTasks(model->getTasks());
    }

    void setView(ViewBase *v)
    {
        view = v;
        updateView();
    }
};

int main()
{
    // Create instances of Model, View, and Controller
    Model model;
    View1 view1;
    View2 view2;
    Controller controller(&model, &view1);
    // Perform some operations
    controller.addTask("Buy groceries");
    controller.addTask("Write code");
    controller.setView(&view2);
    return 0;
}
