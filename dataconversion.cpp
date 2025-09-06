#include<iostream>
using namespace std;
class Polar {
private:
 float radius, angle; // angle in radians
public:
 Polar(float r = 0, float a = 0) : radius(r), angle(a) {}
 float getRadius() { 
 return radius; 
}
 float getAngle() { 
 return angle; 
}
};

class Rect {
private:
 float x, y;
public:
 Rect(float a = 0, float b = 0) : x(a), y(b) {}

 // Constructor for Polar to Rect conversion
 Rect(Polar p) {
 x = p.getRadius() * cos(p.getAngle());
 y = p.getRadius() * sin(p.getAngle());
 std::cout << "Converting Polar to Rect...\n";
 }

 void display() const {
 std::cout << "x=" << x << ", y=" << y << std::endl;
 }
};

int main() {
 Polar p(5.0, 0.78); // radius 5, angle 45 degrees (pi/4)
 Rect r = p; // Implicit conversion: Polar to Rect
 r.display(); // Output: x=3.53553, y=3.53553
 return 0;
}