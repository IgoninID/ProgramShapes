#include <clocale>
#include <iostream>
#include "ClassShapes.h";

using namespace std;

template <typename type_class>
void print_info(const type_class& Figure)
{
	cout << Figure.to_string() << "\n" << "\n";
}

int main()
{
	setlocale(LC_ALL, "rus");
	string name_t = "Треугольник1";
	string name_t2 = "Труегольник2";
	string name_r = "Прямоугольник";
	Triangle_sides Triangle(name_t, 5, 5, 5);
	Triangle_coord Triangle2(name_t2, 1, 1, -2, -2, 1, -2);
	Rectangle Rec(name_r, 5, 5);
	print_info<Triangle_sides>(Triangle);
	print_info<Triangle_coord>(Triangle2);
	print_info<Rectangle>(Rec);
	Rectangle* r = new Rectangle(name_r, 10, 10);
	Shapes* figure = r;
	cout << figure->to_string() << "\n" << "\n" << r->to_string();
	
}