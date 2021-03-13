	/* g++ chapter14drill.cpp -o drill  */

	#include <iostream>

using namespace std;


	class B1                                                               //01
	{
	public:
		virtual void vf() const {cout << "B1::vf\n";}
		void f() const {cout << "B1::f\n";}                              //04: hozzáadjuk ezt a függvényt
		virtual void pvf() {cout << "B1::pvf\n";}                        //05 pure virtual function pvf()
	};

	class D1: public B1                                                 //02      //class D1:public B1
	{
	public:
		void vf() const override {cout << "D1::vf\n";}         
		void f() {cout <<"D1::f\n";}
	};
	class D2: public D1                                                 //05      D2 osztály D1-ből definiálva
	{
	public:
		void vf() const override {cout << "D2::vf\n";}         
		void f() {cout <<"D2::f\n";}
		void pvf() const {cout << "D2::pvf\n";}
	};

	struct B2
	{
		virtual void pvf() const =0;
	};

	struct D21 : B2 {
		string s = "D21:the value of the string";
		void pvf() const override { cout << s << '\n'; }
	};


	struct D22 : B2 {
		int i = 42;
		void pvf() const override { cout << i << '\n'; }
	};

	void f (B2& b)
    {
    b.pvf();
    }

	// class  D2:B1 
	// {
	// public:
	// 	void f() const {cout << "D2::f\n";}
	// 	void g() const { cout << "D2::g\n";}
	// };

	// void call(const B1& b)          //call: mindkettő kiíratására használt függvény.
	// {
	// 	b.vf();
	// 	b.f();
	// }
	int main()
	{
		B1 b;                        //01
		b.vf();
		b.f();
		//call(b);
		cout << "1.drill\n\n";
		 D1 d;                     //02
		 d.vf();
		 d.f();
		 cout << "2.drill\n\n";

	    B1& bref = d;           //03
	    bref.vf();
	    bref.f();

	    cout << "3.drill\n\n";


	    D2 d2;                        //06
	    d2.vf();
	    d2.f();
	    d2.pvf();

	    cout << "6.drill\n\n";

	    D21 elso;
	    D22 masodik;

	    f(elso);
	    f(masodik);



	    cout << "Call end\n";




	    return 0;
	}