#include <iostream>
#define LOW_THRESHOLD 0.25
#define HIGH_THRESHOLD 0.75
#define MULTIPLE 2

template <typename T>
class MyVector
{
public:
    // Constructor
    MyVector() : capacity(2), size(0)
    {
        this->dataArray = new T[capacity];
    }

    // Destructor
    ~MyVector()
    {
        delete[] this->dataArray;
    }

    // Function to check vector is empty
    bool isEmpty()
    {
        if (this->size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // Function to get the current size of the vector
    const int getSize()
    {
        return this->size;
    }

    // Function to get the current capacity of the vector
    const int getCapacity()
    {
        return this->capacity;
    }
    // Function to access an element at a specific index
    T &at(int index)
    {
        if (index < 0 || index >= this->size)
        {
            std::cerr << "Index out of bounds!" << std::endl;
            exit(1);
        }
        return this->dataArray[index];
    }

    // Function to return address of the first element
    const T *data()
    {
        return this->dataArray;
    }

    // Function to add an element to the vector
    void push_back(T value)
    {
        if (this->size > this->capacity * HIGH_THRESHOLD)
        {
            // If the vector is full, double its capacity
            resize(this->capacity * MULTIPLE);
        }
        dataArray[this->size++] = value;
    }

    // Funciton to pop an element from vector from the back
    T pop_back()
    {
        if (!isEmpty())
        {
            this->size--;
            if (this->size < this->capacity * LOW_THRESHOLD)
            {
                resize(this->capacity / MULTIPLE);
            }
            return (this->dataArray[this->size]);
        }
        else
        {
            std::cerr << "Vector is empty!" << std::endl;
            exit(1);
        }
    }

    // Function to delete an element
    void eraser(int index)
    {
        if (index < this->size)
        {
            for (int i = index; i < this->size; i++)
            {
                this->dataArray[i] = this->dataArray[i + 1];
            }
            this->size--;
            if (this->size < this->capacity / 2 - 1)
            {
                resize(this->capacity / 2);
            }
        }
        else
        {
            std::cerr << "Index out of bounds!" << std::endl;
            exit(1);
        }
    }

private:
    T *dataArray;
    int capacity;
    int size;

    // Private function to resize the vector
    void resize(int newCapacity)
    {
        T *newData = new T[newCapacity];
        for (int i = 0; i < this->size; ++i)
        {
            newData[i] = this->dataArray[i];
        }
        delete[] this->dataArray;
        this->dataArray = newData;
        this->capacity = newCapacity;
    }
};

int main()
{
    MyVector<int> myVector;

    std::cout << "Push back some elements." << std::endl;
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(40);
    myVector.push_back(50);
    myVector.push_back(60);
    myVector.push_back(70);
    std::cout << "Size of myVector: " << myVector.getSize() << std::endl;
    std::cout << "List of elements: ";
    for (int i = 0; i < myVector.getSize(); ++i)
    {
        std::cout << myVector.at(i) << " ";
    }
    std::cout << std::endl
              << std::endl;

    std::cout << "Pop back some elements." << std::endl;
    std::cout << "The first pop back element: " << myVector.pop_back() << std::endl;
    std::cout << "The second pop back element: " << myVector.pop_back() << std::endl;
    std::cout << "Size of myVector: " << myVector.getSize() << std::endl;
    std::cout << "List of elements: ";
    for (int i = 0; i < myVector.getSize(); ++i)
    {
        std::cout << myVector.at(i) << " ";
    }
    std::cout << std::endl
              << std::endl;

    std::cout << "Change value of an element." << std::endl;
    myVector.at(2) = 100;
    std::cout << "List of elements: ";
    for (int i = 0; i < myVector.getSize(); ++i)
    {
        std::cout << myVector.at(i) << " ";
    }
    std::cout << std::endl
              << std::endl;

    return 0;
}
