#include <cassert>
#include "ClassShapes.h"

/// <summary>
/// ����������� ��� ����������
/// </summary>
Shapes::Shapes()
{
	string s = "�����";
	set_name(s);
}

/// <summary>
/// ����������� � �����������
/// </summary>
/// <param name="name - ���"></param>
Shapes::Shapes(string& Name)
{
	set_name(Name);
}

int Shapes::number() const
{
	return 1;
}

/// <summary>
/// ����� ����� �����
/// ������� �����: �������� ��� �� ������ ���� ������ ��� ������ ��������
/// </summary>
/// <param name="name - ���"></param>
/// <returns>
/// ��������� ����� (1 - ������, 0 - ��� ������)
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
		name = "������";
		return 1;
	}
}

/// <summary>
/// ����� ������ �����, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ���
/// </returns>
string Shapes::get_name() const
{
	return name;
}

/// <summary>
/// ����� �������� � ������ ���������� � ������ 
/// const - �� ������ ����� ������
/// virtual - ����������� ����� (��� ������������� ������������)
/// </summary>
/// <returns>
/// ���������� ������ � ����������� � ������
/// </returns>
string Shapes::to_string() const
{
	string s = "Name: " + name;
	return s;
}


/// <summary>
/// ����������� ��� ����������
/// </summary>
Rectangle::Rectangle()
{
	string s = "�������������";
	set_name(s);
	set_all_sides(1, 1);
}

/// <summary>
/// ����������� � �����������
/// </summary>
/// <param name="name - ���"></param>
/// <param name="side1 - ����� ��������������"></param>
/// <param name="side2 - ������ ��������������"></param>
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
/// ����� ����� ����� ������ ������� �������������� (�����)
/// </summary>
/// <param name="length - ����� ��������������"></param>
void Rectangle::set_side1(double length)
{
	Side1 = length;
}

/// <summary>
/// ����� ����� ����� ������ ������� �������������� (������)
/// </summary>
/// <param name="length - ������ ��������������"></param>
void Rectangle::set_side2(double length)
{
	Side2 = length;
}

/// <summary>
/// ����� ����� ���� ������ ��������������
/// ������� �����: ����� ������ ������ ���� ������ 0
/// </summary>
/// <param name="length_s1 - ����� ��������������"></param>
/// <param name="length_s2 - ������ ��������������"></param>
/// <returns>
/// ��������� ����� (1 - ������, 0 - ��� ������)
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
/// ����� ������ ����� ��������������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ����� ��������������
/// </returns>
double Rectangle::get_side1() const
{
	return Side1;
}

/// <summary>
/// ����� ������ ������ ��������������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ������ ��������������
/// </returns>
double Rectangle::get_side2() const
{
	return Side2;
}

/// <summary>
/// ���������������� (override) ����� ���������� ���������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// �������� ��������������
/// </returns>
double Rectangle::calc_perim() const
{
	return 2 * (Side1 + Side2);
}

/// <summary>
/// ���������������� (override) ����� ���������� �������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ������� ��������������
/// </returns>
double Rectangle::calc_area() const
{
	return Side1 * Side2;
}

/// <summary>
/// ���������������� (override) ����� �������� � ������ ���������� � ��������������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ������ � ����������� � ��������������
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
/// ����������� ��� ����������
/// </summary>
Triangle_coord::Triangle_coord()
{
	string s = "�����������";
	set_name(s);
	set_all_vertexs(0, 0, 0, 0, 0, 0);
}

/// <summary>
/// ����������� � �����������
/// </summary>
/// <param name="name - ���"></param>
/// <param name="x1 - ���������� x ������ �������"></param>
/// <param name="y1 - ���������� y ������ �������"></param>
/// <param name="x2 - ���������� x ������ �������"></param>
/// <param name="y2 - ���������� y ������ �������"></param>
/// <param name="x3 - ���������� x ������� �������"></param>
/// <param name="y3 - ���������� y ������� �������"></param>
Triangle_coord::Triangle_coord(string& name, double x1, double y1, double x2, double y2, double x3, double y3)
{
	set_name(name);
	set_all_vertexs(x1, y1, x2, y2, x3, y3);
}

/// <summary>
/// ����� ����� ���������� x ��� ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
void Triangle_coord::set_x_v1(double x)
{
	x_v1 = x;
}

/// <summary>
/// ����� ����� ���������� y ��� ������ �������
/// </summary>
/// <param name="y - ���������� y"></param>
void Triangle_coord::set_y_v1(double y)
{
	y_v1 = y;
}

/// <summary>
/// ����� ����� ���������� x ��� ������ �������
/// </summary>
/// <param name="x - ���������� x"></param>
void Triangle_coord::set_x_v2(double x)
{
	x_v2 = x;
}

/// <summary>
/// ����� ����� ���������� y ��� ������ �������
/// </summary>
/// <param name="y - ���������� y"></param>
void Triangle_coord::set_y_v2(double y)
{
	y_v2 = y;
}

/// <summary>
/// ����� ����� ���������� x ��� ������� �������
/// </summary>
/// <param name="x - ���������� x"></param>
void Triangle_coord::set_x_v3(double x)
{
	x_v3 = x;
}

/// <summary>
/// ����� ����� ���������� y ��� ������� �������
/// </summary>
/// <param name="y - ���������� y"></param>
void Triangle_coord::set_y_v3(double y)
{
	y_v3 = y;
}

/// <summary>
/// ������ ����� ��������� ���� ������ ������������
/// ������� �����: ��� � ����� ������ �� ������ ���������� � ����� �����
/// </summary>
/// <param name="x1 - ���������� x ������ �������"></param>
/// <param name="y1 - ���������� y ������ �������"></param>
/// <param name="x2 - ���������� x ������ �������"></param>
/// <param name="y2 - ���������� y ������ �������"></param>
/// <param name="x3 - ���������� x ������� �������"></param>
/// <param name="y3 - ���������� y ������� �������"></param>
/// <returns>
/// ��������� ����� (1 - ������, 0 - ��� ������)
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
/// ����� ������ ���������� x ������ �������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ���������� x ������ �������
/// </returns>
double Triangle_coord::get_x_v1() const
{
	return x_v1;
}

/// <summary>
/// ����� ������ ���������� y ������ �������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ���������� y ������ �������
/// </returns>
double Triangle_coord::get_y_v1() const
{
	return y_v1;
}

/// <summary>
/// ����� ������ ���������� x ������ �������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ���������� x ������ �������
/// </returns>
double Triangle_coord::get_x_v2() const
{
	return x_v2;
}

/// <summary>
/// ����� ������ ���������� y ������ �������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ���������� y ������ �������
/// </returns>
double Triangle_coord::get_y_v2() const
{
	return y_v2;
}

/// <summary>
/// ����� ������ ���������� x ������� �������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ���������� x ������� �������
/// </returns>
double Triangle_coord::get_x_v3() const
{
	return x_v3;
}

/// <summary>
/// ����� ������ ���������� y ������� �������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ���������� y ������� �������
/// </returns>
double Triangle_coord::get_y_v3() const
{
	return y_v3;
}

/// <summary>
/// ���������� ������� ������������.
/// </summary>
/// <param name="first_x - ���������� x ����� �������"></param>
/// <param name="first_y - ���������� y ����� �������"></param>
/// <param name="second_x - ���������� x ������ �������"></param>
/// <param name="second_y - ���������� y ������ �������"></param>
/// <returns>
/// ����� ������� ������������
/// </returns>
double calc_side(double first_x, double first_y, double second_x, double second_y)
{
	return sqrt(((first_x - second_x) * (first_x - second_x)) + ((first_y - second_y) * (first_y - second_y))); // ���������� ����� ������� ������������ �� �������
}

/// <summary>
/// ���������������� (override) ����� ���������� ���������, const - �� ������ ����� ������
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
/// </summary>
/// <returns>
/// �������� ������������
/// </returns>
double Triangle_coord::calc_perim() const
{
	double P;
	double side1 = calc_side(get_x_v1(), get_y_v1(), get_x_v2(), get_y_v2());
	double side2 = calc_side(get_x_v1(), get_y_v1(), get_x_v3(), get_y_v3());
	double side3 = calc_side(get_x_v2(), get_y_v2(), get_x_v3(), get_y_v3());
	if ((((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2)) && ((side1 > 0.0) && (side2 > 0.0) && (side3 > 0.0))) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
		P = side1 + side2 + side3; // ���������� ����� ���� ������ ������������(��������)
	else
		P = 0;
	return P;
}

/// <summary>
/// ���������������� (override) ����� ���������� �������, const - �� ������ ����� ������
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
/// </summary>
/// <returns>
/// ������� ������������
/// </returns>
double Triangle_coord::calc_area() const
{
	double S;
	double side1 = calc_side(get_x_v1(), get_y_v1(), get_x_v2(), get_y_v2());
	double side2 = calc_side(get_x_v1(), get_y_v1(), get_x_v3(), get_y_v3());
	double side3 = calc_side(get_x_v2(), get_y_v2(), get_x_v3(), get_y_v3());
	if ((((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2)) && ((side1 > 0.0) && (side2 > 0.0) && (side3 > 0.0))) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
	{
		double P = side1 + side2 + side3;
		S = sqrt((P / 2) * ((P / 2) - side1) * ((P / 2) - side2) * ((P / 2) - side3)); // ���������� �������� ������������ �� ������� ������
	}
	else
		S = 0;
	return S;
}

/// <summary>
/// ���������������� (override) ����� �������� � ������ ���������� � ������������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ������ � ����������� � ������������
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
/// ����������� ��� ����������
/// </summary>
Triangle_sides::Triangle_sides()
{
	string s = "�����������";
	set_name(s);
	set_all_sides(0, 0, 0);
}

/// <summary>
/// ����������� � �����������
/// </summary>
/// <param name="name - ���"></param>
/// <param name="side1 - ����� ������ �������"></param>
/// <param name="side2 - ����� ������ �������"></param>
/// <param name="side3 - ����� ������� �������"></param>
Triangle_sides::Triangle_sides(string& name, double side1, double side2, double side3)
{
	set_name(name);
	set_all_sides(side1, side2, side3);
}

/// <summary>
/// ����� ����� ����� ������ ������� ������������
/// </summary>
/// <param name="length - ����� �������"></param>
void Triangle_sides::set_side1(double length)
{
	Side1 = length;
}

/// <summary>
/// ����� ����� ����� ������ ������� ������������
/// </summary>
/// <param name="length - ����� �������"></param>
void Triangle_sides::set_side2(double length)
{
	Side2 = length;
}

/// <summary>
/// ����� ����� ����� ������� ������� ������������
/// </summary>
/// <param name="length - ����� �������"></param>
void Triangle_sides::set_side3(double length)
{
	Side3 = length;
}

/// <summary>
/// ����� ����� ���� ������ ������������
/// ������� �����: ����� ������ ������ ���� ������ 0
/// </summary>
/// <param name="length_s1 - ����� ������ �������"></param>
/// <param name="length_s2 - ����� ������ �������"></param>
/// <param name="length_s3 - ����� ������� �������"></param>
/// <returns>
/// ��������� ����� (1 - ������, 0 - ��� ������)
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
/// ����� ������ ����� ������ ������� ������������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ����� ������ ������� ������������
/// </returns>
double Triangle_sides::get_side1() const
{
	return Side1;
}

/// <summary>
/// ����� ������ ����� ������ ������� ������������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ����� ������ ������� ������������
/// </returns>
double Triangle_sides::get_side2() const
{
	return Side2;
}

/// <summary>
/// ����� ������ ����� ������� ������� ������������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ����� ������� ������� ������������
/// </returns>
double Triangle_sides::get_side3() const
{
	return Side3;
}

/// <summary>
/// ���������������� (override) ����� ���������� ���������, const - �� ������ ����� ������
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
/// </summary>
/// <returns>
/// �������� ������������
/// </returns>
double Triangle_sides::calc_perim() const
{
	double P;
	if (((get_side1() + get_side2()) > get_side3()) && ((get_side2() + get_side3()) > get_side1()) && ((get_side1() + get_side3()) > get_side2()) && (get_side1() > 0) && (get_side2() > 0) && (get_side3() > 0)) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
		P = get_side1() + get_side2() + get_side3(); // ���������� ����� ���� ������ ������������(��������)
	else
		P = 0;
	return P;
}

/// <summary>
/// ���������������� (override) ����� ���������� �������, const - �� ������ ����� ������
/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
/// </summary>
/// <returns>
/// ������� ����������
/// </returns>
double Triangle_sides::calc_area() const
{
	double S;
	if (((get_side1() + get_side2()) > get_side3()) && ((get_side2() + get_side3()) > get_side1()) && ((get_side1() + get_side3()) > get_side2()) && (get_side1() > 0) && (get_side2() > 0) && (get_side3() > 0)) // ���� ����� ���� ������ ������������ ������ ��� ����� ������� �������
	{
		double P = get_side1() + get_side2() + get_side3();
		S = sqrt((P / 2) * ((P / 2) - get_side1()) * ((P / 2) - get_side2()) * ((P / 2) - get_side3())); // ���������� �������� ������������ �� ������� ������
	}
	else
		S = 0;
	return S;
}

/// <summary>
/// ���������������� (override) ����� �������� � ������ ���������� � ������������, const - �� ������ ����� ������
/// </summary>
/// <returns>
/// ������ � ����������� � ������������
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
/// ������� �������� ������� �������
/// </summary>
//void test()
//{
//
//}