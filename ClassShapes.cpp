#include <cassert>
#include "ClassShapes.h"

/// <summary>
/// конструктор без параметров
/// </summary>
Shapes::Shapes()
{
	string s = "Точка";
	set_name(s);
}

/// <summary>
/// конструктор с параметрами
/// </summary>
/// <param name="name - имя"></param>
Shapes::Shapes(string& Name)
{
	set_name(Name);
}

int Shapes::number() const
{
	return 1;
}

/// <summary>
/// метод ввода имени
/// правило ввода: вводимое имя не должно быть пустым или просто пробелом
/// </summary>
/// <param name="name - имя"></param>
/// <returns>
/// результат ввода (1 - ошибка, 0 - нет ошибки)
/// </returns>
int Shapes::set_name(string& Name)
{
	if ((Name != "") && (Name != " "))
	{
		name = Name;
		return 0;
	}
	else
	{
		name = "фигура";
		return 1;
	}
}

/// <summary>
/// метод вывода имени, const - не меняет полей класса
/// </summary>
/// <returns>
/// имя
/// </returns>
string Shapes::get_name() const
{
	return name;
}

/// <summary>
/// метод перевода в строку информации о фигуре 
/// const - не меняет полей класса
/// virtual - виртуальный метод (для динамического полиморфизма)
/// </summary>
/// <returns>
/// возвращает строку с информацией о фигуре
/// </returns>
string Shapes::to_string() const
{
	string s = "Name: " + name;
	return s;
}


/// <summary>
/// конструктор без параметров
/// </summary>
Rectangle::Rectangle()
{
	string s = "Прямоугольник";
	set_name(s);
	set_all_sides(1, 1);
}

/// <summary>
/// конструктор с параметрами
/// </summary>
/// <param name="name - имя"></param>
/// <param name="side1 - длина прямоугольника"></param>
/// <param name="side2 - ширина прямоугольника"></param>
Rectangle::Rectangle(string& Name, double side1, double side2)
{
		set_name(Name);
		set_all_sides(side1, side2);
}

int Rectangle::number() const
{
	return 0;
}

/// <summary>
/// метод ввода длины первой стороны прямоугольника (длина)
/// </summary>
/// <param name="length - длина прямоугольника"></param>
void Rectangle::set_side1(double length)
{
	Side1 = length;
}

/// <summary>
/// метод ввода длины второй стороны прямоугольника (ширина)
/// </summary>
/// <param name="length - ширина прямоугольника"></param>
void Rectangle::set_side2(double length)
{
	Side2 = length;
}

/// <summary>
/// метод ввода всех сторон прямоугольника
/// правило ввода: длины сторон должны быть больше 0
/// </summary>
/// <param name="length_s1 - длина прямоугольника"></param>
/// <param name="length_s2 - ширина прямоугольника"></param>
/// <returns>
/// результат ввода (1 - ошибка, 0 - нет ошибок)
/// </returns>
int Rectangle::set_all_sides(double length_s1, double length_s2)
{
	if ((length_s1 > 0) && (length_s2 > 0))
	{
		set_side1(length_s1);
		set_side2(length_s2);
		return 0;
	}
	else
	{
		set_side1(1);
		set_side2(1);
		return 1;
	}
}

/// <summary>
/// метод вывода длины прямоугольника, const - не меняет полей класса
/// </summary>
/// <returns>
/// длина прямоугольника
/// </returns>
double Rectangle::get_side1() const
{
	return Side1;
}

/// <summary>
/// метод вывода ширины прямоугольника, const - не меняет полей класса
/// </summary>
/// <returns>
/// ширина прямоугольника
/// </returns>
double Rectangle::get_side2() const
{
	return Side2;
}

/// <summary>
/// переопределенный (override) метод вычисления периметра, const - не меняет полей класса
/// </summary>
/// <returns>
/// периметр прямоугольника
/// </returns>
double Rectangle::calc_perim() const
{
	return 2 * (Side1 + Side2);
}

/// <summary>
/// переопределенный (override) метод вычисления площади, const - не меняет полей класса
/// </summary>
/// <returns>
/// площадь прямоугольника
/// </returns>
double Rectangle::calc_area() const
{
	return Side1 * Side2;
}

/// <summary>
/// переопределенный (override) метод перевода в строку информации о прямоугольнике, const - не меняет полей класса
/// </summary>
/// <returns>
/// строка с информацией о прямоугольнике
/// </returns>
string Rectangle::to_string() const
{
	string s = "Name: " + get_name() + "\n" +
		       "Sides: " + std::to_string(Side1) + " ; " +
						   std::to_string(Side2) + " ; " +
						   std::to_string(Side1) + " ; " +
						   std::to_string(Side2) + "\n" +
			   "Perim: " + std::to_string(calc_perim()) + "\n" +
			   "Area: " + std::to_string(calc_area());
	return s;
}


/// <summary>
/// конструктор без параметров
/// </summary>
Triangle_coord::Triangle_coord()
{
	string s = "Треугольник";
	set_name(s);
	set_all_vertexs(0, 0, 0, 0, 0, 0);
}

/// <summary>
/// конструктор с параметрами
/// </summary>
/// <param name="name - имя"></param>
/// <param name="x1 - координата x первой вершины"></param>
/// <param name="y1 - координата y первой вершины"></param>
/// <param name="x2 - координата x второй вершины"></param>
/// <param name="y2 - координата y второй вершины"></param>
/// <param name="x3 - координата x третьей вершины"></param>
/// <param name="y3 - координата y третьей вершины"></param>
Triangle_coord::Triangle_coord(string& name, double x1, double y1, double x2, double y2, double x3, double y3)
{
	set_name(name);
	set_all_vertexs(x1, y1, x2, y2, x3, y3);
}

/// <summary>
/// метод ввода координаты x для первой вершины
/// </summary>
/// <param name="x - координата x"></param>
void Triangle_coord::set_x_v1(double x)
{
	x_v1 = x;
}

/// <summary>
/// метод ввода координаты y для первой вершины
/// </summary>
/// <param name="y - координата y"></param>
void Triangle_coord::set_y_v1(double y)
{
	y_v1 = y;
}

/// <summary>
/// метод ввода координаты x для второй вершины
/// </summary>
/// <param name="x - координата x"></param>
void Triangle_coord::set_x_v2(double x)
{
	x_v2 = x;
}

/// <summary>
/// метод ввода координаты y для второй вершины
/// </summary>
/// <param name="y - координата y"></param>
void Triangle_coord::set_y_v2(double y)
{
	y_v2 = y;
}

/// <summary>
/// метод ввода координаты x для третьей вершины
/// </summary>
/// <param name="x - координата x"></param>
void Triangle_coord::set_x_v3(double x)
{
	x_v3 = x;
}

/// <summary>
/// метод ввода координаты y для третьей вершины
/// </summary>
/// <param name="y - координата y"></param>
void Triangle_coord::set_y_v3(double y)
{
	y_v3 = y;
}

/// <summary>
/// методы ввода координат всех вершин треугольника
/// правило ввода: две и более вершин не должны находиться в одной точке
/// </summary>
/// <param name="x1 - координата x первой вершины"></param>
/// <param name="y1 - координата y первой вершины"></param>
/// <param name="x2 - координата x второй вершины"></param>
/// <param name="y2 - координата y второй вершины"></param>
/// <param name="x3 - координата x третьей вершины"></param>
/// <param name="y3 - координата y третьей вершины"></param>
/// <returns>
/// результат ввода (1 - ошибка, 0 - нет ошибки)
/// </returns>
int Triangle_coord::set_all_vertexs(double x1, double y1, double x2, double y2, double x3, double y3)
{
	if (((x1 == y1) && (x1 == x2) && (x2 == y2)) || ((x1 == y1) && (x1 == x3) && (x3 == y3)) || ((x2 == y2) && (x2 == x3) && (x3 == y3)))
	{
		set_x_v1(0);
		set_x_v2(0);
		set_x_v3(0);
		set_y_v1(0);
		set_y_v2(0);
		set_y_v3(0);
		return 1;
	}
	else
	{
		set_x_v1(x1);
		set_x_v2(x2);
		set_x_v3(x3);
		set_y_v1(y1);
		set_y_v2(y2);
		set_y_v3(y3);
		return 0;
	}
}

/// <summary>
/// метод вывода координаты x первой вершины, const - не меняет полей класса
/// </summary>
/// <returns>
/// координата x первой вершины
/// </returns>
double Triangle_coord::get_x_v1() const
{
	return x_v1;
}

/// <summary>
/// метод вывода координаты y первой вершины, const - не меняет полей класса
/// </summary>
/// <returns>
/// координата y первой вершины
/// </returns>
double Triangle_coord::get_y_v1() const
{
	return y_v1;
}

/// <summary>
/// метод вывода координаты x второй вершины, const - не меняет полей класса
/// </summary>
/// <returns>
/// координата x второй вершины
/// </returns>
double Triangle_coord::get_x_v2() const
{
	return x_v2;
}

/// <summary>
/// метод вывода координаты y второй вершины, const - не меняет полей класса
/// </summary>
/// <returns>
/// координата y второй вершины
/// </returns>
double Triangle_coord::get_y_v2() const
{
	return y_v2;
}

/// <summary>
/// метод вывода координаты x третьей вершины, const - не меняет полей класса
/// </summary>
/// <returns>
/// координата x третьей вершины
/// </returns>
double Triangle_coord::get_x_v3() const
{
	return x_v3;
}

/// <summary>
/// метод вывода координаты y третьей вершины, const - не меняет полей класса
/// </summary>
/// <returns>
/// координата y третьей вершины
/// </returns>
double Triangle_coord::get_y_v3() const
{
	return y_v3;
}

/// <summary>
/// вычисление стороны треугольника.
/// </summary>
/// <param name="first_x - координата x одной вершины"></param>
/// <param name="first_y - координата y одной вершины"></param>
/// <param name="second_x - координата x другой вершины"></param>
/// <param name="second_y - координата y другой вершины"></param>
/// <returns>
/// длина стороны треугольника
/// </returns>
double calc_side(double first_x, double first_y, double second_x, double second_y)
{
	return sqrt(((first_x - second_x) * (first_x - second_x)) + ((first_y - second_y) * (first_y - second_y))); // Возвращает длину стороны треугольника по формуле
}

/// <summary>
/// переопределенный (override) метод вычисления периметра, const - не меняет полей класса
/// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
/// </summary>
/// <returns>
/// периметр треугольника
/// </returns>
double Triangle_coord::calc_perim() const
{
	double P;
	double side1 = calc_side(get_x_v1(), get_y_v1(), get_x_v2(), get_y_v2());
	double side2 = calc_side(get_x_v1(), get_y_v1(), get_x_v3(), get_y_v3());
	double side3 = calc_side(get_x_v2(), get_y_v2(), get_x_v3(), get_y_v3());
	if ((((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2)) && ((side1 > 0.0) && (side2 > 0.0) && (side3 > 0.0))) // если сумма двух сторон треугольника меньше или равна третьей стороне
		P = side1 + side2 + side3; // Возвращает сумму трех сторон треугольника(периметр)
	else
		P = 0;
	return P;
}

/// <summary>
/// переопределенный (override) метод вычисления площади, const - не меняет полей класса
/// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
/// </summary>
/// <returns>
/// площадь треугольника
/// </returns>
double Triangle_coord::calc_area() const
{
	double S;
	double side1 = calc_side(get_x_v1(), get_y_v1(), get_x_v2(), get_y_v2());
	double side2 = calc_side(get_x_v1(), get_y_v1(), get_x_v3(), get_y_v3());
	double side3 = calc_side(get_x_v2(), get_y_v2(), get_x_v3(), get_y_v3());
	if ((((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2)) && ((side1 > 0.0) && (side2 > 0.0) && (side3 > 0.0))) // если сумма двух сторон треугольника меньше или равна третьей стороне
	{
		double P = side1 + side2 + side3;
		S = sqrt((P / 2) * ((P / 2) - side1) * ((P / 2) - side2) * ((P / 2) - side3)); // Возвращает периметр треугольника по формуле Герона
	}
	else
		S = 0;
	return S;
}

/// <summary>
/// переопределенный (override) метод перевода в строку информации о треугольнике, const - не меняет полей класса
/// </summary>
/// <returns>
/// строка с информацией о треугольнике
/// </returns>
string Triangle_coord::to_string() const
{
	string s = "Name: " + get_name() + "\n" +
			   "Vertexs: ( " + std::to_string(get_x_v1()) + " ; " + std::to_string(get_y_v1()) + " ), " +
			   "( " + std::to_string(get_x_v2()) + " ; " + std::to_string(get_y_v2()) + " ), " +
			   "( " + std::to_string(get_x_v3()) + " ; " + std::to_string(get_y_v3()) + " )\n" +
			   "Perim: " + std::to_string(calc_perim()) + "\n" +
			   "Area: " + std::to_string(calc_area());
	return s;
}


/// <summary>
/// конструктор без параметров
/// </summary>
Triangle_sides::Triangle_sides()
{
	string s = "Треугольник";
	set_name(s);
	set_all_sides(0, 0, 0);
}

/// <summary>
/// конструктор с параметрами
/// </summary>
/// <param name="name - имя"></param>
/// <param name="side1 - длина первой стороны"></param>
/// <param name="side2 - длина второй стороны"></param>
/// <param name="side3 - длина третьей стороны"></param>
Triangle_sides::Triangle_sides(string& name, double side1, double side2, double side3)
{
	set_name(name);
	set_all_sides(side1, side2, side3);
}

/// <summary>
/// метод ввода длины первой стороны треугольника
/// </summary>
/// <param name="length - длина стороны"></param>
void Triangle_sides::set_side1(double length)
{
	Side1 = length;
}

/// <summary>
/// метод ввода длины второй стороны треугольника
/// </summary>
/// <param name="length - длина стороны"></param>
void Triangle_sides::set_side2(double length)
{
	Side2 = length;
}

/// <summary>
/// метод ввода длины третьей стороны треугольника
/// </summary>
/// <param name="length - длина стороны"></param>
void Triangle_sides::set_side3(double length)
{
	Side3 = length;
}

/// <summary>
/// метод ввода всех сторон треугольника
/// правило ввода: длины сторон должны быть больше 0
/// </summary>
/// <param name="length_s1 - длина первой стороны"></param>
/// <param name="length_s2 - длина второй стороны"></param>
/// <param name="length_s3 - длина третьей стороны"></param>
/// <returns>
/// результат ввода (1 - ошибка, 0 - нет ошибок)
/// </returns>
int Triangle_sides::set_all_sides(double length_s1, double length_s2, double length_s3)
{
	if ((length_s1 + length_s2 <= length_s3) || (length_s2 + length_s3 <= length_s1) || (length_s1 + length_s3 <= length_s2))
	{
		set_side1(0);
		set_side2(0);
		set_side3(0);
		return 1;
	}
	else
	{
		set_side1(length_s1);
		set_side2(length_s2);
		set_side3(length_s3);
		return 0;
	}
}

/// <summary>
/// метод вывода длины первой стороны треугольника, const - не меняет полей класса
/// </summary>
/// <returns>
/// длина первой стороны треугольника
/// </returns>
double Triangle_sides::get_side1() const
{
	return Side1;
}

/// <summary>
/// метод вывода длины второй стороны треугольника, const - не меняет полей класса
/// </summary>
/// <returns>
/// длина второй стороны треугольника
/// </returns>
double Triangle_sides::get_side2() const
{
	return Side2;
}

/// <summary>
/// метод вывода длины третьей стороны треугольника, const - не меняет полей класса
/// </summary>
/// <returns>
/// длина третьей стороны треугольника
/// </returns>
double Triangle_sides::get_side3() const
{
	return Side3;
}

/// <summary>
/// переопределенный (override) метод вычисления периметра, const - не меняет полей класса
/// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
/// </summary>
/// <returns>
/// периметр треугольника
/// </returns>
double Triangle_sides::calc_perim() const
{
	double P;
	if (((get_side1() + get_side2()) > get_side3()) && ((get_side2() + get_side3()) > get_side1()) && ((get_side1() + get_side3()) > get_side2()) && (get_side1() > 0) && (get_side2() > 0) && (get_side3() > 0)) // если сумма двух сторон треугольника меньше или равна третьей стороне
		P = get_side1() + get_side2() + get_side3(); // Возвращает сумму трех сторон треугольника(периметр)
	else
		P = 0;
	return P;
}

/// <summary>
/// переопределенный (override) метод вычисления площади, const - не меняет полей класса
/// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
/// </summary>
/// <returns>
/// площадь треуголька
/// </returns>
double Triangle_sides::calc_area() const
{
	double S;
	if (((get_side1() + get_side2()) > get_side3()) && ((get_side2() + get_side3()) > get_side1()) && ((get_side1() + get_side3()) > get_side2()) && (get_side1() > 0) && (get_side2() > 0) && (get_side3() > 0)) // если сумма двух сторон треугольника меньше или равна третьей стороне
	{
		double P = get_side1() + get_side2() + get_side3();
		S = sqrt((P / 2) * ((P / 2) - get_side1()) * ((P / 2) - get_side2()) * ((P / 2) - get_side3())); // Возвращает периметр треугольника по формуле Герона
	}
	else
		S = 0;
	return S;
}

/// <summary>
/// переопределенный (override) метод перевода в строку информации о треугольнике, const - не меняет полей класса
/// </summary>
/// <returns>
/// строка с информацией о треугольнике
/// </returns>
string Triangle_sides::to_string() const
{
	string s = "Name: " + get_name() + "\n" +
			   "Sides: " + std::to_string(get_side1()) + " ; " +
						   std::to_string(get_side2()) + " ; " +
						   std::to_string(get_side3()) + "\n" +
			   "Perim: " + std::to_string(calc_perim()) + "\n" +
			   "Area: " + std::to_string(calc_area());
	return s;
}

/// <summary>
/// функция проверки методов классов
/// </summary>
//void test()
//{
//
//}