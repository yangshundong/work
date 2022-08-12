#include <iostream>
#include <cmath>
#include <string>
using namespace std;



class point {
public:point(int a = 0, int b = 0) { x = a; y = b; }
	  point(point& p) { x = p.getx() + 1; y = p.gety() + 1; };
	  int getx() { return x; }
	  int gety() { return y; }
	  void setxy(int a, int b) { x = a; y = b; }
	  void show() { printf("(%d,%d)", x, y); cout << endl; }
private:int x; int y;
};

class rec {
public:
	rec(point pa, point pb) :p1(pa), p2(pb) {
		p1 = pa; p2 = pb;
		area = fabs((p1.getx() - p2.getx()) * (p1.gety() - p2.gety()));
	};
	//rec(&line) { ; };
	void show();

private:
	point p1, p2;
	float area;
};
void rec::show() {
	cout << "pin:" << endl; p1.show(); p2.show();
	cout << "area:" << area << endl;
}
int main() {
	point a(2, 3);
	point b(a);
	rec myrec(a, b);
	myrec.show();

}