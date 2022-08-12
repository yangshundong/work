#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Clock {
public:
	Clock();
	void set(int, int, int);
	void show();
private:
	int h, m, s;
};
Clock::Clock() :h(0), m(0), s(0) {};
void Clock::set(int h1, int m1, int s1) {
	h = h1; m = m1; s = s1;
}
void Clock::show() {
	printf("%d:%d:%d\n", h, m, s);
}
Clock globClock;
int main() {
	cout << "fist output" << endl;
	globClock.show();
	globClock.set(8, 30, 30);
	Clock myclock(globClock);
	cout << "second output" << endl;
	myclock.show();

}
