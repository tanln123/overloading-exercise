#include <iostream>

using namespace std;

class Personal
{
private:
    double height;
    double weight;
public:
    Personal(){}
    Personal(double h, double w)
    {
        height = h;
        weight = w;
    }
    void displayInfo()
    {
        cout << "H: " << height << " W: " << weight << endl;
    }

    Personal operator () (int a, int b, int c, const Personal& person)
    {
        Personal p;

        //random calculation
        p.height = a + c + person.height;
        p.weight = b + person.weight;
        return p;
    }
};

int main()
{
    Personal p1(190, 90);
    cout << "p1: ";
    p1.displayInfo();
    Personal p2;
    p2 = p1(10, 40, 10, p1);
    cout << "p2: ";
    p2.displayInfo();
    return 0;
}
