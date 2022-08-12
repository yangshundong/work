#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class r {
public:
	r(int r1, int r2) :r1(r1), r2(r2) {}
	void print();
	void print()const;
	void friend reset(r k);

private:
	int r1, r2;
};

void r::print() {
	cout << r1 + r2 << endl;

}
void r::print() const { cout << r1 * r2; }
//void h(r m) { return m.r1; }
void reset(r k) { k.r1 = -1; k.r2 = -1; }//unvalue 
int main() {
	r const  a(2, 4);

	r b(1, 1);

	reset(a);
	a.print();
	reset(b);
	b.print();


}