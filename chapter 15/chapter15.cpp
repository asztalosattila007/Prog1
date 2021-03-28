//g++ chapter15.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`

#include "Simple_window.h"
#include "Graph.h"

double one(double x) { return 1; }
double slope(double x) { return x/2; }
double square(double x) { return x * x; }
double sloping_cos(double x) { return cos(x)+slope(x); }

int main(){

	using namespace Graph_lib;
//function graphing drill
	Point w(100,100);
	Simple_window win {w, 600, 600, "Function graphs"};

	Axis x {Axis::x, Point{100, 300}, 400, 20, "1 == 20 pixels"};  //tengely: (100,300) ponton, 400 hosszú, 20 notch,"label"
    Axis y {Axis::y, Point{300, 500}, 400, 20, "1 == 20 pixels"};

    x.set_color(Color::red);
    y.set_color(Color::red);

    win.attach(x);
    win.attach(y);

    win.wait_for_button();

    constexpr int r_min=-10;   //range meghatározás [-10:11]
    constexpr int r_max=11;

    const Point orig {300,300};        //origo pont meghatározás

    constexpr int n_points=400;

    constexpr int x_scale=20;
    constexpr int y_scale=20;

    //Function név{függvény,minimum_range,maximum_range,(origo)point,number of points,x_scale,y_scale}

    Function f1 {one,r_min,r_max,orig,n_points,x_scale,y_scale};

    win.attach(f1);
    win.set_label("graphs 1");
    win.wait_for_button();

    Function f2 {slope,r_min,r_max,orig,n_points,x_scale,y_scale};
    Text t2{Point{100,300+300/2-20},"x/2"};

    win.attach(f2);
    win.attach(t2);
    win.set_label("graphs 2");
    win.wait_for_button();

    Function f3 {square,r_min,r_max,orig,n_points,x_scale,y_scale};
    win.attach(f3);
    win.set_label("graphs 3");
    win.wait_for_button();

    Function f4 {cos,r_min,r_max,orig,n_points,x_scale,y_scale};
    win.attach(f4);
    f4.set_color(Color::blue);
    win.set_label("graphs 4");
    win.wait_for_button();

    Function f5 {sloping_cos,r_min,r_max,orig,n_points,x_scale,y_scale};
    // Function f5 {[](double x) {return cos(x)+slope(x);},r_min,r_max,orig,n_points,x_scale,y_scale}; //lamda expression-el
    win.attach(f5);
    win.set_label("graphs 5");
    win.wait_for_button();


    


}