#include <iostream>
#include <cmath>
using namespace std;



class Point {
public:
	Point(int xx = 0, int yy = 0) { x = xx; y = yy; }
	Point(Point& p);
	int getx() { return x; }
	int gety() { return y; }
private:
	int x, y;
};
Point::Point(Point& p) {
	x = p.x; y = p.y;
	cout << "calling the copy constructor of point &" << endl;
}


class Line {
public:
	Line(Point, Point);
	Line(Line& l);
	double getlen() { return len; };
private:
	Point p1, p2; double len;
};
Line::Line(Point pa, Point pb) :p1(pa), p2(pb) {
	/*p1 = pa; p2 = pb;*/
	cout << "calling the constructor of line " << endl;
	double x = double(p1.getx() - p2.getx());
	double y = double(p1.gety() - p2.gety());
	len = sqrt(x * x + y * y);
}
Line::Line(Line& l) :p1(l.p1), p2(l.p2) {
	cout << "calling the constructor of line&" << endl;
	len = l.len;
}




const float pi = 3.14, zprice = 35, gprice = 20;
class Circle {
public:
	Circle(float);
	float circ();
	float area();
private:
	float r;
};

Circle::Circle(float a = 1) { r = a; }
float Circle::circ() { return 2 * pi * r; }
float Circle::area() { return pi * r * r; }










int main() {

	Point myp1(1, 1);
	Point myp2(4, 5);
	Line myline(myp1, myp2);
	cout << "lenth:" << myline.getlen() << endl;
	Line myline2(myline);
	cout << "lenth2:" << myline2.getlen() << endl;






}