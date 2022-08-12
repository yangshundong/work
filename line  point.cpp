#include <iostream>
#include <cmath>
#include <string>
using namespace std;
static int k = 1;
class point {
public:
	point() :x(0), y(0), cnt(k) { k++; }
	int getx() { return x; }
	int gety() { return y; }
	void set(int a, int b, int c) {
		x = a; y = b, cnt = c;
	};
	point(point& p) { x = p.x; y = p.y; cnt = p.cnt; }
	void show() {
		printf("(%d,%d) cnt:%d \n", x, y, cnt);
	}
private:
	int x, y, cnt;
};

class line {
public:
	line(point pa, point pb) :p1(pa), p2(pb) {
		k = 0;
	}
	line(point& l) {}
	void show() {
		cout << "{"; p1.show(); p2.show(); cout << "}";
	}
private:
	point p1, p2; double k;
};
int main() {
	point a[10];
	for (int i = 0; i < 10; ++i) {
		a[i].set(i, i + 1, i);
		a[i].show();
	}

}