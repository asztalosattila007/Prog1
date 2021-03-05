/* g++ exercises1.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`*/
#include "Simple_window.h"
#include "Graph.h"

int main(){

using namespace Graph_lib;

Point t1 (100,100);
Simple_window win (t1,600,400, "Exercises");
win.wait_for_button();

//01
Rectangle r{Point{50,50},50,25};
r.set_color(Color::blue);
win.attach(r);

Polygon rect;
rect.add(Point{125,50});
rect.add(Point{175,50});
rect.add(Point{175,75});
rect.add(Point{125,75});
rect.set_color(Color::red);
win.attach(rect);

win.set_label("1.feladat");
win.wait_for_button();

//02

Rectangle rt{Point{200,50},100,30};
win.attach(rt);

Text t {Point{205,75}, "Howdy!"};
t.set_font(Font::helvetica_bold);
t.set_font_size(20);
win.attach(t);

win.set_label("2.feladat");
win.wait_for_button();

//03

Text t2{Point{50,350}, "Sz"};
t2.set_font(Font::courier);
t2.set_font_size(150);
t2.set_color(Color::green);

Text t3 {Point{250,350}, "M"};
t3.set_font(Font::courier);
t3.set_font_size(150);
t2.set_color(Color::green);
t3.set_color(Color::yellow);

win.attach(t2);
win.attach(t3);
win.set_label("3.feladat");
win.wait_for_button();

//04

Rectangle tc1{Point{400,50},40,40};
Rectangle tc2{Point{440,50},40,40};
Rectangle tc3{Point{480,50},40,40};
Rectangle tc4{Point{400,90},40,40};
Rectangle tc5{Point{440,90},40,40};
Rectangle tc6{Point{480,90},40,40};
Rectangle tc7{Point{400,130},40,40};
Rectangle tc8{Point{440,130},40,40};
Rectangle tc9{Point{480,130},40,40};

tc1.set_fill_color(Color::red);
tc2.set_fill_color(Color::white);
tc3.set_fill_color(Color::red);
tc4.set_fill_color(Color::white);
tc5.set_fill_color(Color::red);
tc6.set_fill_color(Color::white);
tc7.set_fill_color(Color::red);
tc8.set_fill_color(Color::white);
tc9.set_fill_color(Color::red);

win.attach(tc1);
win.attach(tc2);
win.attach(tc3);
win.attach(tc4);
win.attach(tc5);
win.attach(tc6);
win.attach(tc7);
win.attach(tc8);
win.attach(tc9);
win.set_label("4.feladat");
win.wait_for_button();

//05

Rectangle redframe {Point{180,180}, 1920*2/3, 1080*3/4};
redframe.set_style(Line_style(Line_style::solid,8));
redframe.set_color(Color::red);
win.attach(redframe);
win.set_label("5.feladat");
win.wait_for_button();

//06
Simple_window six (Point{200,200},2000,1100, "6.feladat");
six.wait_for_button();

//07

Rectangle h{Point{550,400},200,200}; //ház alap
Rectangle h3{Point{570,440},50,50};  //ablak1
Rectangle h4{Point{680,440},50,50};  //ablak2
Rectangle h5{Point{625,520},50,80};  //ajtó
Rectangle h6{Point{570,290},30,80};  //kémény

Polygon h2;                     //tető
win.attach(h2);
h2.add(Point{650,200});
h2.add(Point{750,400});
h2.add(Point{550,400});
h6.set_fill_color(Color::black);
h2.set_fill_color(Color::red);
h.set_fill_color(Color::yellow);
h3.set_fill_color(Color::blue);
h4.set_fill_color(Color::blue);
h5.set_fill_color(Color::green);
win.attach(h6);
win.attach(h2);
win.attach(h);
win.attach(h3);
win.attach(h4);
win.attach(h5);


win.set_label("7.feladat");
win.wait_for_button();

//08

Circle o1 {Point{320,440}, 50};
Circle o2 {Point{360,480}, 50};
Circle o3 {Point{400,440}, 50};
Circle o4 {Point{440,480}, 50};
Circle o5 {Point{480,440}, 50};

win.attach(o1);
win.attach(o2);
win.attach(o3);
win.attach(o4);
win.attach(o5);
o1.set_color(Color::blue);
o2.set_color(Color::yellow);
o3.set_color(Color::black);
o4.set_color(Color::green);
o5.set_color(Color::red);
o1.set_style(Line_style(Line_style::solid,4));
o2.set_style(Line_style(Line_style::solid,4));
o3.set_style(Line_style(Line_style::solid,4));
o4.set_style(Line_style(Line_style::solid,4));
o5.set_style(Line_style(Line_style::solid,4));
win.set_label("8.feladat");
win.wait_for_button();

//09

Image img {Point{800,400}, "icon.jpg"};
win.attach(img);
win.set_label("9.feladat");
win.wait_for_button();

//10
// Simple_window ten (Point{100,100},1000,800, "10.feladat");

// ten.wait_for_button();

//11
Simple_window el (Point{100,100},600,400, "11.feladat");
Polygon tri;
tri.add(Point{650,200});
tri.add(Point{750,400});
tri.add(Point{550,400});
tri.set_fill_color(Color::red);

Rectangle sqr {Point{505,160},300,300};
el.attach(tri);
el.attach(sqr);


Closed_polyline poly_rect;
    poly_rect.add(Point{650,50}); 
    poly_rect.add(Point{500,100});
    poly_rect.add(Point{250,500});
    poly_rect.add(Point{950,500});
    poly_rect.add(Point{900,100});
    
   
    el.attach(poly_rect);
   el.wait_for_button();

}
