#include <iostream>
#include <list>

#include <vector>

#include "User.h"
#include "System.h"
#include "Product.h"
#include "Data.cpp"

using namespace std;
int Data::objectCount = 0;

int main()
{
	string name, pname;
	int id, phone, category;
	float fix_price, discount, real_price;
	list<Product> pro;
	cout << "Hi! Write your name!\n";
	cin >> name;
	cout << "Mobile phone: ";
	cin >> phone;
	cout << "\nAdd product name: ";
	cin >> pname;
	cout << "Enter price and discount (press enter after price)\n";
	cin >> fix_price;
	cout << "\n";
	cin >> discount;
	cout << "\n";
	Product a(pname, phone, fix_price, discount, forLower);
	Product b;
	Product c("Chorna Ikra", 151, 250, 0.1, forUpper);
	pro.push_back(a);
	User u1(name, phone, pro);
	User u2;
	cout << "\n" << u1[0] << endl;
	pro.push_back(b);
	pro.push_back(c);
	User u3("Vasya", 3, pro);

	for (int i = 0; i < pro.size(); i++)
	{
		cout << u3[i] << endl;
	}

	System s;
	s.addUser(u1);
	s.addUser(u3);
	User(LowerClass(u3));
	cout << "\nData demo\n";
	Data data;
	cout << data;
	Data data2(28, 2, 2004);
	cout << data2;
	++data2;
	cout << data2;
	cout << "Static member demo\n";
	cout << data.objectCount << "\n";
	cout << data.objectCount << "\n";
	Data data3;
	cin >> data3;
	cout << data3;
	cout << u3.getGroup() << endl;
	LowerClass u3Lower(u3);
	cout << u3Lower.getGroup() << endl;
}