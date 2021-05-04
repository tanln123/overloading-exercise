#include <iostream>

using namespace std;

class Personal
{
private:
    double height;
    double weight;
public:
    Personal(double h, double w)
    {
        height = h;
        weight = w;
    }
    void displayInfo()
    {
        cout << "H: " << height << " W: " << weight << endl;
    }

    void operator= (const Personal& p)
    {
        height = p.height;
        weight = p.weight;
    }
};

int main()
{
    Personal p1(190, 90);
    cout << "p1: ";
    p1.displayInfo();
    Personal p2(170, 80);
    cout << "p2: ";
    p2.displayInfo();

    //use assignment operator
    p1 = p2;
    cout << "p1 after: ";
    p1.displayInfo();
    return 0;
}
