/*#include "ClassShapes.h"

Shapes::Shapes()
{
	string s = "Точка";
	set_name(s);
}

Shapes::Shapes(string& Name)
{
	set_name(Name);
}

int Shapes::set_name(string& Name)
{
	if ((Name != "") && (Name != " "))
	{
		name = Name;
		return 0;
	}
	else
	{
		return 1;
	}
}

string Shapes::get_name() const
{
	return name;
}

string Shapes::to_string() const
{
	string s = "Name: " + name;
	return s;
}



Rectangle::Rectangle()
{
	string s = "Прямоугольник";
	set_name(s);
	set_all_sides(1, 1);
}

Rectangle::Rectangle(string& name, double side1, double side2)
{

}

void Rectangle::set_side1(double length)
{

}

void Rectangle::set_side2(double length)
{

}

void Rectangle::set_all_sides(double length_s1, double length_s2)
{

}

double Rectangle::get_side1() const
{

}

double Rectangle::get_side2() const
{

}

double Rectangle::calc_perim() const
{

}

double Rectangle::calc_area() const
{

}

string Rectangle::to_string() const
{

}



Triangle_coord::Triangle_coord()
{

}

Triangle_coord::Triangle_coord(string& name, double x1, double y1, double x2, double y2, double x3, double y3)
{

}

void Triangle_coord::set_x_v1(double x)
{

}

void Triangle_coord::set_y_v1(double y)
{

}

void Triangle_coord::set_x_v2(double x)
{

}

void Triangle_coord::set_y_v2(double y)
{

}

void Triangle_coord::set_x_v3(double x)
{

}

void Triangle_coord::set_y_v3(double y)
{

}

void Triangle_coord::set_all_vertexs(double x1, double y1, double x2, double y2, double x3, double y3)
{

}

double Triangle_coord::get_x_v1() const
{

}

double Triangle_coord::get_y_v1() const
{

}

double Triangle_coord::get_x_v2() const
{

}

double Triangle_coord::get_y_v2() const
{

}

double Triangle_coord::get_x_v3() const
{

}

double Triangle_coord::get_y_v3() const
{

}

double Triangle_coord::calc_perim() const
{

}

double Triangle_coord::calc_area() const
{

}

string Triangle_coord::to_string() const
{

}



Triangle_sides::Triangle_sides()
{

}

Triangle_sides::Triangle_sides(string& name, double side1, double side2, double side3)
{

}

void Triangle_sides::set_side1(double length)
{

}

void Triangle_sides::set_side2(double length)
{

}

void Triangle_sides::set_side3(double length)
{

}

void Triangle_sides::set_all_sides(double length_s1, double length_s2, double length_s3)
{

}

double Triangle_sides::get_side1() const
{

}

double Triangle_sides::get_side2() const
{

}

double Triangle_sides::get_side3() const
{

}

double Triangle_sides::calc_perim() const
{

}

double Triangle_sides::calc_area() const
{

}

string Triangle_sides::to_string() const
{

}

*/