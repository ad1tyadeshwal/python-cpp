#include <iostream>
using namespace std;

class Shape
{
public:
    int x, y;
    void getdata()
    {
        cout<<"enter the dimensions :"<<endl;
        cin >> x >> y;
    }
};

class Rectangle : public Shape
{
public:
    int area()
    {
        return x * y;
    }
};

class Circle : public Shape
{
public:
    float area()
    {
        return 3.14 * x * x;
    }
};

int main()
{
    Rectangle r ;
    Circle c;

    r.getdata();
    
    cout << "area of rectangle:"<<r.area() << endl;

    c.getdata();
    cout << "area of circle:"<<c.area() << endl;

    return 0;
}
