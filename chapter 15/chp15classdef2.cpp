//g++ chp15classdef2.cpp -o drill

#include <iostream>

using namespace std;

struct Person
{
  private:
	string n;
	int a;

  public:
	Person() {
		n = "";
		a = 0;
	};
	Person(string nn,int aa): n(nn),a(aa) {};  //4.konstruktor a név és életkor inicializáláshoz
	string name() const {return n;}  //5. name() és age() function név és életkor beolvasáshoz
	int age() const {return a;}
	
};


istream& operator>>(istream& is,Person& p) {
	string name;
	int age;
	is >> name >> age;
	p=Person(name,age);
	return is;
}

ostream& operator<<(ostream& os,Person& p) {
	return os << p.name() <<"\n" << p.age() <<"\n";

}

int main()
{
		 // Person fst;
		 // fst.name= "Goofy";
		 // fst.age=63;

		 // cout << fst.name <<"\n";
		 // cout << fst.age <<"\n";


	cout << "Enter name and age: ";
	Person scnd;
	cin >> scnd;
	cout << scnd << endl;

	


	return 0;
}