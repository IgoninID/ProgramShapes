#pragma once
#include <string>

using namespace std;

class Shapes
{
private:
	string name;
	int vertexs;
	int sides;
public:
	Shapes();
	Shapes(string name, int vertexs, int sides);
	void set_name(string name);
	void set_vertexs(int number);
	void set_sides(int number);
	string get_name() const;
	int get_vertexs() const;
	int get_sides() const;
	virtual string to_string() const;
};

class Triangle_coord : public Shapes
{
private:
	double x_v1;
	double y_v1;
	double x_v2;
	double y_v2;
	double x_v3;
	double y_v3;
	void set_x_v1(double x);
	void set_y_v1(double y);
	void set_x_v2(double x);
	void set_y_v2(double y);
	void set_x_v3(double x);
	void set_y_v3(double y);
public:
	Triangle_coord();
	Triangle_coord(string name, int vertexs, int sides, double x1, double y1, double x2, double y2, double x3, double y3);
	void set_all_vertexs(double x1, double y1, double x2, double y2, double x3, double y3);
	double get_x_v1() const;
	double get_y_v1() const;
	double get_x_v2() const;
	double get_y_v2() const;
	double get_x_v3() const;
	double get_y_v3() const;
	double calc_perim() const;
	double calc_area() const;
	string to_string() const override;
};

class Triangle_sides : public Shapes
{
private:
	double side1;
	double side2;
	double side3;
	void set_side1(double length);
	void set_side2(double length);
	void set_side3(double length);
public:
	Triangle_sides();
	Triangle_sides(string name, int vertexs, int sides, double side1, double side2, double side3);
	void set_all_sides(double length_s1, double length_s2, double length_s3);
	double get_side1() const;
	double get_side2() const;
	double get_side3() const;
	double calc_perim() const;
	double calc_area() const;
	string to_string() const override;
};

class Rectangle : public Shapes
{
private:
	double side1;
	double side2;
	double side3;
	double side4;
	void set_side1(double length);
	void set_side2(double length);
	void set_side3(double length);
	void set_side4(double length);
public:
	Rectangle();
	Rectangle(string name, int vertexs, int sides, double side1, double side2, double side3, double side4);
	void set_all_sides(double length_s1, double length_s2, double length_s3, double length_s4);
	double get_side1() const;
	double get_side2() const;
	double get_side3() const;
	double get_side4() const;
	double calc_perim() const;
	double calc_area() const;
	string to_string() const override;
};