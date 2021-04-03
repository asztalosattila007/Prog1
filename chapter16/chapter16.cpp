//g++ chapter16.cpp Graph.cpp Window.cpp GUI.cpp Lines_window.cpp -o drill `fltk-config --ldflags --use-images`

#include "Graph.h"

#include "Lines_window.h"

int main()
//try
{

	Lines_window win {Point{100,100}, 1920, 1080, "Lines"};
    
    return gui_main();
	
}
//catch(exception& e){
//	cerr << "exception: " << e.what() <<'\n';
	//return 1;
//}
//catch(...){
//	cerr << "Some exception\n";
//	return 2;
//}