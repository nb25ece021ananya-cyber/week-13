
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape" << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Triangle" << endl;
    }
};

int main()
{
    vector<unique_ptr<Shape>> shapes;
    string name;

    int n;

    cout << "Enter number of shapes: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter shape name (Circle/Rectangle/Triangle): ";
        cin >> name;

        if(name == "Circle")
            shapes.push_back(unique_ptr<Shape>(new Circle()));

        else if(name == "Rectangle")
            shapes.push_back(unique_ptr<Shape>(new Rectangle()));

        else if(name == "Triangle")
            shapes.push_back(unique_ptr<Shape>(new Triangle()));

        else
            cout << "Invalid Shape!" << endl;
    }

    cout << "\nCreated Shapes:\n";

    for(int i = 0; i < shapes.size(); i++)
    {
        shapes[i]->draw();
    }

    return 0;
}
