#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class point {
public:
	point() :x(0), y(0) { cnt++; }
	int getx() { return x; }
	int gety() { return y; }
	void set(int a, int b);
	point(point& p) { x = p.x; y = p.y; cnt++; }
	~point() { cnt--; }
	void show();
private:
	int x, y; 
	static int cnt ;
};



int point::cnt = 0;

void point::set(int a, int b) {
	x = a; y = b;
};
void point::show() {
	printf("(%d,%d) cnt:%d \n", x, y, cnt);
}

int main() {
	point a[10];
	for (int i = 0; i < 10; ++i) {
		a[i].set(i, i + 1);
		a[i].show();
	}

}