#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class point {
public:
	point() :x(0), y(0) { cnt++; }
	int getx() { return x; }
	int gety() { return y; }
	void set(int a, int b) {
		x = a; y = b;
	};
	point(point& p) { x = p.x; y = p.y; cnt++; }
	void show() {
		printf("(%d,%d) cnt:%d \n", x, y, cnt);
	}
	~point() { cnt--; }
	static void showcnt() {
		cout << "ojbect cnt=" << cnt << endl;
	}
	friend float dist(point p1, point p2);//exchange

private:
	int x, y;
	static int cnt;
};

float dist(point p1, point p2) {
	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
	return sqrt(x * x + y * y);
}
int point::cnt = 0;
int main() {
	point a[10];
	for (int i = 0; i < 10; ++i) {
		a[i].set(i, i + 1);
		//a[i].show();
	}
	cout << dist(a[1], a[2]) << endl;
}