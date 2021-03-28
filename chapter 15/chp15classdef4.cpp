//g++ chp15classdef4.cpp -o drill

#include <iostream>

using namespace std;

void error (string s)

{
  throw runtime_error(s);
}

struct Person
{
  private:
	string first_n;
	string last_n;
	int a;

  public:
	Person() {
		first_n = "";
		last_n = "";
		a = 0;
	};
	Person(string fn,string ln,int aa): first_n(fn),last_n(ln),a(aa) {
		 if (aa < 0 || 150 < aa) error("Error: invalid age");
		 string nn=fn + ln; //first és last name egyben
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
	string first_name() const {return first_n;}  //5.: name() és age() function név és életkor beolvasáshoz
	string last_name() const {return last_n;}
	int age() const {return a;}
	
};


istream& operator>>(istream& is,Person& p) {
	string first_name;
	string last_name;
	int age;
	is >> first_name >> last_name >> age;
	p=Person(first_name,last_name,age);
	return is;
}

ostream& operator<<(ostream& os,Person& p) {
	return os << p.first_name() <<"\n" << p.last_name() <<"\n"<< p.age() <<"\n";

}

int main()
try {
		 // Person fst;
		 // fst.name= "Goofy";
		 // fst.age=63;

		 // cout << fst.name <<"\n";
		 // cout << fst.age <<"\n";


	cout << "Enter name(first and last name ) and age: ";
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