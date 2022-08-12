#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class tree {
public:
	tree(int a = 0, double b = 0) { age = a; height = b; }
	tree(tree& t);
	void grow(int year) { age += year; height += year * 3; cout << "grow to" << height << " metres"; }



private:
	int age; double height;
};



int main() {
	tree a;
	a.grow(5);
}