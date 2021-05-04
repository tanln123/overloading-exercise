#include <iostream>

using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;
public:
    void setLength(double len)
    {
        length = len;
    }
    void setBreadth (double bre)
    {
        breadth = bre;
    }
    void setHeight (double hei)
    {
        height = hei;
    }

    double computeVolume (void)
    {
        return length*breadth*height;
    }

    //overload "+" operator to add the box object with extension object
    Box operator+(const Box b)
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
};

int main()
{
    Box Box1;           // declare the box
    Box Ext;            // declare the extension
    Box Box2;           // declare the box after extending
    double volume= 0.0; // store the volume of a box

    //Box1 specification
    Box1.setLength(3.0);
    Box1.setBreadth(5.0);
    Box1.setHeight(10.0);

    //extension specification
    Ext.setLength(6.0);
    Ext.setBreadth(4.0);
    Ext.setHeight(5.0);

    //volume of the box before extending
    volume = Box1.computeVolume();
    cout << "Volume before extending: " << volume << endl;

    //extend the box properties
    Box2 = Box1 + Ext;

    //volume of the box after extending
    volume = Box2.computeVolume();
    cout << "Volume after extending: " << volume << endl;
    return 0;
}
