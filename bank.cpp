#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class save {
private:
	int id;
	double balance;
	double rate;
	int lastdate;
	double accumulation;
	void record(int date, double amount);
	double accumulate(int date)const {
		return accumulation + balance * (date - lastdate);
	}





public:
	save(int date, int id, double rate);
	int getid() { return id; };
	double getbalance() { return balance; }
	double getrate() { return rate; };
	void deposit(int date, double amount);
	void withdraw(int date, double amount);
	void settle(int date);
	void show();





};


void save::record(int date, double amount) {
	accumulation = accumulate(date);
	lastdate = date;
	amount = floor(amount * 100 + 0.5) / 100;
	balance += amount;
	cout << date << "\t # " << id << "\t£¤" << amount << "\tbalance: " << balance << endl;

}

save::save(int date, int id, double rate) :id(id),
balance(0), rate(rate), lastdate(date), accumulation(0) {
	cout << date << "\t#" << id << "is created" << endl;
}
void save::deposit(int date, double amount) {
	record(date, amount);
}
void save::withdraw(int date, double amount) {
	if (amount > getbalance())cout << "not enough money" << endl;
	else record(date, -amount);
}
void save::settle(int date) {
	double interest = accumulate(date) * rate / 365;
	if (interest != 0)record(date, interest);
	accumulation = 0;
}

void save::show() {
	cout << "#" << id << "\tbalance: " << balance << endl;
}


int main() {
	save sa1(1, 59800431, 0.015);

	sa1.deposit(5, 500);
	sa1.show();
	sa1.deposit(50, 100);


	sa1.show();
	sa1.withdraw(60, 50);
	sa1.show();

}

