#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    int inches;
public:
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    //method to display distance
    void displayDistance()
    {
        cout << "F: " << feet << " I: " << inches << endl;
    }

    //overloaded post-decrement (--) operator
    Distance operator--(int)
    {
        feet--;
        inches--;
        return Distance(feet, inches);
    }

    //overloading pre-decrement (--) operator
    Distance operator--()
    {
        --feet;
        --inches;
        return Distance(feet, inches);
    }
};

int main()
{
    Distance D1(14,10);
    cout << "d1: ";
    D1.displayDistance();
    Distance D2(3,-8);
    cout << "d2: ";
    D2.displayDistance();

    --D1;
    D1.displayDistance();
    --D1;
    D1.displayDistance();

    D2--;
    D2.displayDistance();
    D2--;
    D2.displayDistance();
    return 0;
}
