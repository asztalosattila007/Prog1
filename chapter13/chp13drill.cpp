// g++ chp13drill.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`

#include "Simple_window.h"
#include "Graph.h"

int main(){
//1.
	 using namespace Graph_lib;
	
	 Simple_window win {Point{100,100}, 800, 1000, "Chapter 13"};

	 win.wait_for_button();
//2.
    int x_size=800;
    int y_size=800;
    int x_grid=100;              // 1000/8=125
    int y_grid=100;                 // 800/8=100

    Lines grid;
    for (int x=x_grid; x<x_size;x+=x_grid)
    	grid.add(Point{x,0},Point{x,y_size});
    for (int y = y_grid; y<y_size; y+=y_grid)
    	  grid.add(Point{0,y},Point{x_size,y});


//     int x_max =1000;
//     int y_max =800;

//     int grid_size=100;
//     int grid_max=800;

//     Lines grid;

//     for (int xy = grid_size; xy <= grid_max; xy += grid_size)
//     {
//     	grid.add(Point{xy,0}, Point{xy,grid_max});
//     	grid.add(Point{0,xy}, Point{grid_max,xy});
//     }



win.attach(grid);
win.set_label("2.fel");
   win.wait_for_button();

//3
// Vector_ref<Rectangle> rects;

// for (int i = 0; i < 8; ++i)
// {
    
// }

Rectangle r1{Point{0,0}, 100,100};
r1.set_fill_color(Color::red);
Rectangle r2{Point{100,100}, 100,100};
r2.set_fill_color(Color::red);
Rectangle r3{Point{200,200}, 100,100};
r3.set_fill_color(Color::red);
Rectangle r4{Point{300,300}, 100,100};
r4.set_fill_color(Color::red);
Rectangle r5{Point{400,400}, 100,100};
r5.set_fill_color(Color::red);
Rectangle r6{Point{500,500}, 100,100};
r6.set_fill_color(Color::red);
Rectangle r7{Point{600,600}, 100,100};
r7.set_fill_color(Color::red);
Rectangle r8{Point{700,700}, 100,100};
r8.set_fill_color(Color::red);

    win.attach(r1);
    win.attach(r2);
    win.attach(r3);
    win.attach(r4);
    win.attach(r5);
    win.attach(r6);
    win.attach(r7);
    win.attach(r8);
    win.set_label("3.fel");
    win.wait_for_button();


//4

 Image im1 {Point{0,200},"badge.jpg"};  
 im1.set_mask(Point{100,50},200,200);    //Point : itt azt határozzuk meg,  hogy melyik részét látjuk
 win.attach(im1);
 Image im2 {Point{0,400},"badge.jpg"};  
 im2.set_mask(Point{100,50},200,200); 
win.attach(im2);
Image im3 {Point{0,600},"badge.jpg"};  
 im3.set_mask(Point{100,50},200,200); 
win.attach(im3);
 win.set_label("4.fel");
    win.wait_for_button();

//5

    Image mov {Point{0,0},"icon.jpg"};  
 mov.set_mask(Point{100,50},100,100);    
 win.attach(mov);
 win.set_label("5.fel");

 for (int i = 0; i < 8; ++i)
 {
     for (int j = 0; j < 8; ++j)
     {
         win.wait_for_button();
         if (j < 7) mov.move(100,0);
         else mov.move(-700,100);
     }
 }
 
}