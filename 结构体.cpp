#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum Level {
	fr, so, ju, se
};
enum Grade { A, B, C, D };
class Student {
public:
	Student(unsigned number, Level level, Grade grade) :
		number(number), level(level), grade(grade) {	}
	void show();
private:
	unsigned number : 27;
	Level level : 2;
	Grade grade : 2;
};
void Student::show() {
	cout << "number: " << number << endl;
	cout << "level: ";
	switch (level) {
	case fr:cout << "fr"; break;
	case so:cout << "so"; break;
	case ju:cout << "ju"; break;
	case se:cout << "se"; break;
	}
	cout << endl << "grade:";
	switch (grade) {
	case A:cout << "A"; break;
	case B:cout << "B"; break;
	case C:cout << "C"; break;
	case D:cout << "D"; break;
	}cout << endl;

}
int main() {
	Student st(123455, so, B);
	cout << "size:" << sizeof(Student) << endl;
	st.show();
}
