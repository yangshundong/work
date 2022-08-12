#pragma once

void swap(int& a, int& b) {
	int temp = a;
	a = b; b = temp;
}
void swap(double& a, double& b) {
	double temp = a;
	a = b; b = temp;
}

int gcc(int a, int b) {
	if (a < b)swap(a, b);
	int temp = 1;
	for (; temp > 0;) {
		temp = a % b;
		a = b; b = temp;
	}
	return a;
}

int fib(int n) {
	int temp = 1; int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += temp; temp = sum - temp;
	}return sum;
}


double combine(int m, int n) {
	double  ret = 0;
	if (n == 1) ret = m;
	else if (n == m) ret = 1;
	else ret = com(m - 1, n - 1) + com(m - 1, n);
	return ret;
}


double jxig(int x) {
	double sum = 1;
	for (int i = 1; i <= x; ++i) {
		sum *= i;
	}
	return sum;
}


void hanoi(int n, char from, char by, char to) {

	if (n == 1) {
		cout << " move from " << from << " to " << to << endl;
	}
	else {
		hanoi(n - 1, from, to, by);
		cout << " move from " << from << " to " << to << endl;
		hanoi(n - 1, by, from, to);
	}
}




//class Clock {
//public:
//	void set(int, int, int);
//	void show();
//private:int h, m, s;
//};
//void Clock::set(int nh = 0, int nm = 0, int ns = 0) {
//	h = nh; m = nm; s = ns;
//}
//void Clock::show() {
//	cout << h << ":" << m << ":" << s << endl;
//}
