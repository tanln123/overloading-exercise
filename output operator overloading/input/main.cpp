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

    bool operator<(const Personal& person2)
    {
        if (height < person2.height)
            return true;

        return false;
    }

    friend ostream &operator<<( ostream &output, const Personal &p ) {
         output << "H: " << p.height << " W: " << p.weight;
         return output;
    }

    friend istream &operator>>( istream  &input, Personal &p ) {
         input >> p.height >> p.weight;
         return input;
    }
};

int main()
{
    Personal p1(190, 90);
    Personal p2(170, 80);
    Personal p3;
    cout << "Enter the body index of the person: " << endl;
    cin >> p3;
    cout << "First person: " << p1 << endl;
    cout << "Second person: " << p2 << endl;
    cout << "Third person: " << p3 << endl;
    return 0;
}
