#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class da {
public:
	da(int a1) { a = a1; type = in; };
	da(char b1) { b = b1; type = ch; }
	da(double c1) { c = c1; type = dou; }
	void show();

private:
	enum { in, ch, dou }type;
	union {
		int a;
		char b;
		double c;
	};
};
void da::show() {
	if (type == in)cout << a;
	else if (type == ch)cout << b;
	else if (type == dou)cout << c;
	cout << endl;
};

int main() {
	da k('o'); k.show();
	da p(3.0); p.show();
}

