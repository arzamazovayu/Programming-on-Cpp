#include <iostream> 
#include <string> 

using namespace std;

class A {
private:
    static const int mSize = 30;
    int arr[mSize];
    int currentSize;
    

public:
    A() : currentSize(0) {};

    explicit A(int size) : currentSize(size) {
        if (size < 0 || size > mSize) {
            throw std::out_of_range("Index out of range");
        }
        for (int i = 0; i < currentSize; ++i) {
            arr[i] = 0;
        }
    }

    int size() const 
    { 
        return currentSize; 
    }
    
    int& operator[](int index) {
        validIndex(index);
        return arr[index];
    }

    const int& operator[](int index) const {
        validIndex(index);
        return arr[index];
    }

    int size() {
        return 0;
    }

    void validIndex(int index) const {
        if (index < 0 || index >= mSize) {
            throw std::out_of_range("Index out of range");
        }
    }
};

int main()
{
    A a1;
    A a2(10); //10 – размер массива 
    A a3 = a2;
    a1 = a3;
    a2 = A(20);
    const A a4(5);
    for (int i = 0; i < a2.size(); i++)
    {
        cout << a4[i];
    }
    return 0;
}
