#include <iostream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    Point(double xVal, double yVal, double zVal) {
        x = xVal;
        y = yVal;
        z = zVal;
    }
    double getX(){
        return x;
    }
    void setX(double xVal) {
        x = xVal;
    }
    double getY(){
        return y;
    }
    void setY(double yVal) {
        y = yVal;
    }
    double getZ(){
        return z;
    }

    void setZ(double zVal) {
        z = zVal;
    }
    void print(){
        std::cout << "Point(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

int main() {
    Point p(1.0, 2.0, 3.0);
    std::cout << "Initial coordinates: ";
    p.print();
    p.setX(4.0);
    p.setY(5.0);
    p.setZ(6.0);
    std::cout << "Updated coordinates: ";
    p.print();
}
