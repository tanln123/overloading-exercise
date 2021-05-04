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

    bool operator<(const Personal& person2)
    {
        if (height < person2.height)
            return true;

        return false;

    }
};

int main()
{
    Personal p1(190, 90);
    p1.displayInfo();
    Personal p2(170, 80);
    p2.displayInfo();

    if (p1 < p2)
        cout << "person 1 is shorter than person 2";
    else
        cout << "person 1 is taller than person 2";
    return 0;
}
