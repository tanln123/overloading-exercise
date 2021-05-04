#include <iostream>

using namespace std;

class printData
{
public:
    void print(int i)
    {
        cout << "Printing int: " << i << endl;
    }
    void print(double d)
    {
        cout << "Printing double: " << d << endl;
    }
    void print(char* name, int age)
    {
        cout << "Your name: " << name << ", age: " << age << endl;
    }
};

int main()
{
    printData pd;
    pd.print(60);
    pd.print(50.35);
    pd.print("Tan", 20);
    return 0;
}
