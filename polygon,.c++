#include <iostream>

using namespace std;

const float M_PI = 3.142;

class Polygon
{
public:
    virtual double area() const = 0;
    virtual ~Polygon() = default;
};

class Circle : public Polygon
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() const 
    {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Polygon
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const 
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const
    {
        return 0.5 * base * height;
    }
};

Polygon *createPolygon(int choice)
{
    switch (choice)
    {
    case 1:
    {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        return new Circle(radius);
    }
    case 2:
    {
        double width, height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
        return new Rectangle(width, height);
    }
    case 3:
    {
        double base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        return new Triangle(base, height);
    }
    default:
        return NULL;
    }
}

int main()
{
    cout << "Choose a polygon:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    int choice;
    cin >> choice;

    Polygon *polygon = createPolygon(choice);
    if (polygon != NULL)
	    {
        cout << "Area: " << polygon->area() << endl;
        delete polygon;
    }
    else
    {
        cout << "Invalid choice\n";
    }
    return 0;
}
