//g++ chp15classdef3.cpp -o drill

#include <iostream>

using namespace std;

void error (string s)

{
  throw runtime_error(s);
}

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
	Person(string nn,int aa): n(nn),a(aa) {
		 if (aa < 0 || 150 < aa) error("Error: invalid age");
		  for (char c : nn) {
        switch(c) {
            case ';': case ':': case '"': case '[': case ']': case '*':case '&': case '^': 
            case '%': case '$': case '#': case '@':case '!':
                error("Error: illegal char in the name");
                break;
            default:
                break;
        }
    }

	};  //4.:  konstruktor a név és életkor inicializáláshoz
	string name() const {return n;}  //5.: name() és age() function név és életkor beolvasáshoz
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
try {
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
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}