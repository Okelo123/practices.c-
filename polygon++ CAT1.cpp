#include <iostream>
using namespace std;

class Polygon {
protected:
    float width, height;

public:
    Polygon(float w, float h) : width(w), height(h) {}
    virtual float area() = 0; 
};

class Triangle : public Polygon {
public:
    Triangle(float b, float h) : Polygon(b, h) {} 

    float area() {
        return (width * height) / 2.0;
    }
};

int main() {
    float base1, height1, base2, height2;
    cout << "Enter base and height for first triangle: ";
    cin >> base1 >> height1;

    cout << "Enter base and height for second triangle: ";
    cin >> base2 >> height2;

    Triangle triangle1(base1, height1);
    Triangle triangle2(base2, height2);

    cout << "Area of first triangle: " << triangle1.area() << endl;
    cout << "Area of second triangle: " << triangle2.area() << endl;

    return 0;
}
