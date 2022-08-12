#include <iostream>
#include <cmath>
#include <string>
using namespace std;

const double pi = 3.14;
class circle {
public:
	circle(double r1) { r = r1; }
	circle(circle& cir) { r = cir.r; }
	//~circle();
	double area();

private:
	double r;
};
double circle::area() {
	return pi * r * r;
}


int main() {
	circle a(sqrt(10)); cout << a.area() << endl;
	circle b(a); cout << b.area() << endl;
}