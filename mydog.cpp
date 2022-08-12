#include <iostream>
#include <cmath>
#include <string>
using namespace std;



class dog {
public:
	dog(int, double);
	//dog(dog &dog);
	int getage();
	double getwei();
	void show();
private:
	int age;
	double weight;
};
dog::dog(int age1 = 0, double weight1 = 0) {
	age = age1; weight = weight1;
}
int dog::getage() { return age; }
double dog::getwei() { return weight; }
void dog::show() {
	cout << "age:" << age << "  weight:" << weight << endl;
}


//dog::dog(dog& adog) {
//	age = adog.age - 1; weight = adog.weight + 10;
//}


int main() {
	dog mydog(2, 3);
	mydog.show();
	dog hisdog(mydog);
	hisdog.show();
}