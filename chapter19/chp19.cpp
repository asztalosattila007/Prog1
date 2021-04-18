//g++ chp19.cpp -o drill
#include "std_lib_facilities.h"

//1. feladat kezdet : definiálás----------------------------------------------
// template<typename T> struct S{T val;};

// int main(){

// 	S<double> sd ;
// 	sd.val =15.4;
// 	cout << sd.val << endl;

// 	S<string> ss ;
// 	ss.val ="szöveg.";
// 	cout << ss.val << endl;

//   return 0;
// }
//1.feladat vége----------------------------------------------------------------

//2-4. feladat kezdet:konstruktor megadás és változó definiálás------------------------------------------
// template<typename T> struct S{ 
// S(T t): val(t) {} 
// T val;};

// int main(){

//     S<int> si(14);
//     cout << si.val << endl;

//     S<char> sc('@');
//     cout << sc.val << endl;
	
//     S<double> sd(15.4);
// 	cout << sd.val << endl;

// 	S<string> ss("szöveg.");
// 	cout << ss.val << endl;

//     S<vector<int>> svi(vector<int>{1,2,3,4,5,6,7,8});
//     //for(int i=0; i< svi.size(); ++i)
//     	//cout<< svi[i] << endl;
//     for(int value : svi.val) //range for ciklus
// 		cout << value << ",";
// 	cout << endl;


//   return 0;
// }

//2-4. feladat vége--------------------------------------------------------------------------


// template<typename T> struct S
// { 
// 	S() {} 
//     S(T t): val(t) {} 
//     istream operator>>(T t) { cin >> val; }
//     T val;
// };
// int main(){

// 	S<int> si;
// 	cout << "Enter int: "; cin >> si.val;
// 	cout << si.val << endl;

// 	S<char> sc;
// 	cout << "Enter char: "; cin >> sc.val;
// 	cout << sc.val << endl;

// 	S<double> sd;
// 	cout << "Enter double: "; cin >> sd.val;
// 	cout << sd.val << endl;

// 	S<string> ss;
// 	cout << "Enter string: "; cin >> ss.val;
// 	cout << ss.val << endl;

// 	S<vector<int>> svi{vector<int>{0,1}};
// 	cout << "Enter 5 ints: ";
// 	for(int i = 0; i < 5; ++i)
// 		cin >> svi.val[i];
// 	for(int j : svi.val)
// 		cout << j << ", ";


// 	cout << endl;


// return 0;

// }



//5-8.feladat kezdet---------------------------------------

	// template<typename T> struct S{ 

	// S(T t): val(t) {} 
	// T& get();

	// private:
	// T val;
	// };

	// template<typename T>
	// T& S<T>::get()
	// {
	//     return val;
	// }

	// int main(){
	//     S<int> si(14);
	//     cout << si.get() << endl;

	//     S<char> sc('@');
	//     cout << sc.get() << endl;
		
	//     S<double> sd(15.4);
	// 	cout << sd.get() << endl;

	// 	S<string> ss("szöveg.");
	// 	cout << ss.get() << endl;

	//     S<vector<int>> svi(vector<int>{1,2,3,4,5,6,7,8});
	//     //for(int i=0; i< svi.size(); ++i)
	//     	//cout<< svi[i] << endl;
	//     for(int value : svi.get()) //range for ciklus
	// 		cout << value << ",";
	// 	cout << endl;
	//   return 0;
	// }


//5-8.feladat vége---------------------------------------

//9. feladat kezdet-------------------
	// template<typename T> struct S{ 

	// S(T t): val(t) {} 
	// T& get();
	// void set(T newval) {val = newval;};

	// private:
	// T val;
	// };

	// template<typename T>
	// T& S<T>::get()
	// {
	//     return val;
	// }

	// int main(){
	//     S<int> si(14);
	//     cout << si.get() << endl;

	//     S<char> sc('@');
	//     cout << sc.get() << endl;
		
	//     S<double> sd(15.4);
	// 	cout << sd.get() << endl;

	// 	S<string> ss("szöveg.");
	// 	cout << ss.get() << endl;
	// 	ss.set("új szöveg");
	// 	cout << ss.get() << endl;

	//     S<vector<int>> svi(vector<int>{1,2,3,4,5,6,7,8});
	//     //for(int i=0; i< svi.size(); ++i)
	//     	//cout<< svi[i] << endl;
	//     for(int value : svi.get()) //range for ciklus
	// 		cout << value << ",";
	// 	cout << endl;
	//   return 0;
	// }

//9. feladat vége-------------------

//10-11. feladat kezdete: set() lecserélés, konstans get()--------------------------------

	// template<typename T> struct S{ 

	// S(T t): val(t) {} 
	// T& get();
	// const T& get() const;
	// S& operator=(const T&);

	// private:
	// 	T val;
	// };



	// 	template<typename T>
	// T& S<T>::get()
	// {
	// 	return val;
	// }


	//     template<typename T>
	// const T& S<T>::get() const
	// {
	// 	return val;
	// }

	// 	template<typename T>
	// S<T>& S<T>::operator=(const T& s)
	// {

	// 	val = s;
	// 	return *this;
	// }

	// int main(){
	// 	S<int> si(14);
	// 	cout << si.get() << endl;

	// 	S<char> sc('@');
	// 	cout << sc.get() << endl;

	// 	S<double> sd(15.4);
	// 	cout << sd.get() << endl;

	// 	S<string> ss("szöveg.");
	// 	cout << ss.get() << endl;
	// 	ss="új szöveg";
	// 	cout << ss.get() << endl;

	// 	S<vector<int>> svi(vector<int>{1,2,3,4,5,6,7,8});
	// 	    //for(int i=0; i< svi.size(); ++i)
	// 	    	//cout<< svi[i] << endl;
	// 	    for(int value : svi.get()) //range for ciklus
	// 	    	cout << value << ",";
	// 	    cout << endl;
	// 	    return 0;
	// 	}


//10-11.feladat vége---------------------------------------------

//12-13. fel. kezdete  
	template<typename T> struct S{ 

	S(T t): val(t) {} 
	T& get();
	const T& get() const;
	S& operator=(const T&);

	private:
		T val;
	};



		template<typename T>
	T& S<T>::get()
	{
		return val;
	}


	    template<typename T>
	const T& S<T>::get() const
	{
		return val;
	}

		template<typename T>
	S<T>& S<T>::operator=(const T& s)
	{

		val = s;
		return *this;
	}

	template<typename T> void read_val(T& v)
    {

       cin >> v;

    }

	int main(){
		S<int> si(14);
		cout << si.get() << endl;

		S<char> sc('@');
		cout << sc.get() << endl;

		S<double> sd(15.4);
		cout << sd.get() << endl;

		S<string> ss("szöveg.");
		cout << ss.get() << endl;
		ss="új szöveg";
		cout << ss.get() << endl;

		S<vector<int>> svi(vector<int>{1,2,3,4,5,6,7,8});
		    //for(int i=0; i< svi.size(); ++i)
		    	//cout<< svi[i] << endl;
		    for(int value : svi.get()) //range for ciklus
		    	cout << value << ",";
		    cout << endl;

		    cout << "Insert an integer value:" << endl;
		    read_val(si.get());
		    cout << si.get() << endl;

		    cout << "Insert a character:" << endl;
		    read_val(sc.get());
		    cout << sc.get() << endl;

		    cout << "Insert a double value:" << endl;
		    read_val(sd.get());
		    cout << sd.get() << endl;

		    cout << "Insert a string:" << endl;
		    read_val(ss.get());
		    cout << ss.get() << endl;

		    return 0;
		}

//12-13. fel. vége  

//14.fel. kezdete
		
//14.fel vége