//g++ chp15classdef.cpp -o drill

	#include <iostream>

using namespace std;

struct Person
{
	string name;
	int age;
};

istream& operator>>(istream& is,Person& p) {
	string name;
	int age;
	is >> p.name >> p.age;
	return is;

}

ostream& operator<<(ostream& os,Person& p) {
	return os << "name: "<< p.name <<"\n" <<"age: "<< p.age <<"\n";

}

int main()
{
		 Person fst;
		 fst.name= "Goofy";
		 fst.age=63;

		 cout << fst.name <<"\n";
		 cout << fst.age <<"\n";

	cout << "Enter name and age: ";
	Person scnd;
	cin >> scnd;
	cout << scnd << endl;


	return 0;
}