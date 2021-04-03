#include "GUI.h"

using namespace Graph_lib;

struct Lines_window : Window {
	Lines_window(Point xy, int w, int h, const string& title );
	
	

	bool wait_for_button();

private:
	Open_polyline lines;

	Button next_button;
	Button quit_button;

	In_box next_x;
	In_box next_y;

	Out_box xy_out;

	Menu color_menu;
	Menu style_menu;
    Button smenu_button;
    Button cmenu_button;

    void change_c(Color c) { lines.set_color(c); }              //change color menu
    void change_s(Line_style s) { lines.set_style(s); }            //change style menu 
    void hide_cmenu() {color_menu.hide();cmenu_button.show();}   //color menu hide
    void hide_smenu() {style_menu.hide();smenu_button.show();}   //style menu hide

    void red_pressed() { change_c(Color::red); hide_cmenu(); }
    void blue_pressed() { change_c(Color::blue); hide_cmenu(); }
    void black_pressed() { change_c(Color::black); hide_cmenu(); }

    void cmenu_pressed() {cmenu_button.hide();color_menu.show();}  //color menu pressed
    void smenu_pressed() {smenu_button.hide();style_menu.show();}  //style menu pressed

    void dot_pressed() { change_s(Line_style::dot); hide_smenu(); }
    void dash_pressed() { change_s(Line_style::dash); hide_smenu(); }
    void solid_pressed() { change_s(Line_style::solid); hide_smenu(); }

	void next();
	void quit();

	//callback függvények
	 //static void cb_red(Address, Address);     //callback for red button          
	 //static void cb_blue(Address, Address);       //callback for blue button          
	 //static void cb_black(Address, Address);  //callback for black button
	 //static void cb_menu(Address, Address);
	 //static void cb_next(Address, Address);
	 //static void cb_quit(Address, Address);



};