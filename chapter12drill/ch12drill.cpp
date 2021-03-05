/*
    g++ ch12drill.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
    g++ ch12drill.cpp Graph.cpp Window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"

int main()
try{

	using namespace Graph_lib;

    int xmax = 1280;
    int ymax = 720;
	
	Simple_window win {Point{100,100}, xmax ,ymax, "My window"};  //ablak létrehozás (100,100) pontban, 600*400 , név:My window

	win.wait_for_button();

	Axis xa {Axis::x,Point{20,300},280,10, "x axis"};   //x tengely 

	win.attach(xa);
	xa.set_color(Color::blue);
	win.set_label("Canvas #2");
    win.wait_for_button();

    Axis ya {Axis::y, Point{150,300}, 280, 10, "y axis"};  //y tengely
    ya.set_color(Color::cyan);                //tengely színe
    ya.label.set_color(Color::dark_red);     // felirat színe
    win.attach(ya);
    win.set_label("Canvas #3");
    win.wait_for_button();

    Function sine {sin,0,100,Point{20,150},1000,50,50};   //függvény, szinusz függvény 0-100-as range (20,250)-es pontban, 1000pontból áll, 50*50-es méret. 
    win.attach(sine);win.set_label("Canvas #4");
    sine.set_color(Color::blue);
    win.wait_for_button();

    Polygon poly;
    poly.add(Point{300,200});      // a háromszög végpontjai.
    poly.add(Point{350,100});
    poly.add(Point{400,200});
    poly.set_color(Color::red);
    poly.set_style(Line_style(Line_style::dash,2));
    win.attach(poly);

    win.set_label("Canvas #5");
    win.wait_for_button();

    Rectangle r{Point{200,200}, 100,50};
    win.attach(r);
    win.set_label("Canvas #6");
    win.wait_for_button();

    Closed_polyline poly_rect;
    poly_rect.add(Point{100,50}); 
    poly_rect.add(Point{200,50});
    poly_rect.add(Point{200,100});
    poly_rect.add(Point{100,100});
    win.attach(poly_rect);
    win.set_label("Canvas #6.1");
    win.wait_for_button();
    poly_rect.add(Point{50,75});
    win.set_label("Canvas #6.2");
    win.wait_for_button();

r.set_fill_color(Color::yellow);       // kitöltő szín
poly.set_style(Line_style(Line_style::dash,4)); 
poly_rect.set_style(Line_style(Line_style::dash,2));
poly_rect.set_fill_color(Color::cyan);
win.set_label("Canvas #7");
win.wait_for_button();

Text t {Point{350,250}, "Hello, graphical world!"};
t.set_color(Color::green);
win.attach(t);
win.set_label("Canvas #8");
win.wait_for_button();

Image ii {Point{100,50},"badge.jpg"};      
win.attach(ii);
win.set_label("Canvas #10");
win.wait_for_button();

ii.move(180,250);
win.set_label("Canvas #11");
win.wait_for_button();

Circle c {Point{100,200},50};
c.set_style(Line_style(Line_style::dash,3));
c.set_fill_color(Color::magenta);
// Ellipse e {Point{100,200},75,25}; 
// e.set_color(Color::dark_red);
Mark m {Point{100,200},'x'};

ostringstream oss;
oss << "screen size: " << x_max() << "*" << y_max() << "; window size: " << win.x_max() << "*" << win.y_max();
Text sizes {Point{100,20},oss.str()};

Ellipse e {Point{200,500}, 100, 50};
    e.set_fill_color(Color::red);

win.attach(c);
win.attach(m);
 win.attach(e);
 win.attach(sizes);
win.set_label("Canvas #12");
win.wait_for_button();


}
catch(exception& e){
	return 1;
}
catch(...){
	return 2;
}