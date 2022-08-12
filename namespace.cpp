//namespace
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int i;
namespace ns { int j; };
int main() {
	i = 5;
	ns::j = 6;
	{
		using namespace ns;
		int i; i = 7;
		cout << "i=" << i << endl << "j=" << j << endl;
	}
	cout << "i=" << i << endl;
}