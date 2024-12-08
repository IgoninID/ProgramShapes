#pragma once
#include <string>

using namespace std;

/// <summary>
/// ����� ������(������)
/// ����: ���
/// ������: ����������� ��� ����������, ����������� � �����������, ���� �����, ����� �����, ����� �������� � ������ ���������� � ������, ����������� ������ ���������� ��������� � �������
/// </summary>
class Shapes
{
private: // ��������� �������

	/// <summary>
	/// ���� ���
	/// </summary>
	string name;
public: // ��������� �������

	/// <summary>
	/// ����������� ��� ����������
	/// </summary>
	Shapes();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="name - ���"></param>
	Shapes(string& name);

	int number() const;

	/// <summary>
	/// ����� ����� �����
	/// ������� �����: �������� ��� �� ������ ���� ������ ��� ������ ��������
	/// </summary>
	/// <param name="name - ���"></param>
	/// <returns>
	/// ��������� ����� (1 - ������, 0 - ��� ������)
	/// </returns>
	int set_name(string& name);

	/// <summary>
	/// ����� ������ �����, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ���
	/// </returns>
	string get_name() const;

	/// <summary>
	/// ����� �������� � ������ ���������� � ������ 
	/// const - �� ������ ����� ������
	/// virtual - ����������� ����� (��� ������������� ������������)
	/// </summary>
	/// <returns>
	/// ���������� ������ � ����������� � ������
	/// </returns>
	virtual string to_string() const;

	/// <summary>
	/// ����������� (��� ����������) ����� ���������� ��������� (��� ����, ����� � �������� ������ ��� ������������� ���� �����)
	/// const - �� ������ ����� ������
	/// virtual - ����������� ����� (��� ������������� ������������)
	/// </summary>
	/// <returns>
	/// �������� ������
	/// </returns>
	virtual double calc_perim() const = 0;

	/// <summary>
	/// ����������� (��� ����������) ����� ���������� ������� (��� ����, ����� � �������� ������ ��� ������������� ���� �����)
	/// const - �� ������ ����� ������
	/// virtual - ����������� ����� (��� ������������� ������������)
	/// </summary>
	/// <returns>
	/// ������� ������
	/// </returns>
	virtual double calc_area() const = 0;
};

/// <summary>
/// ����� ����������� (�� �����������), ������� ������ ������
/// ������� ��������� ��� ���� � ������ ������
/// public Shapes - ���������� ����� ������ ����� ������ ����� � �������������� ����� � ������� ������ ������
/// public - private ���� � ������ �������� private, public ���� � ������ �������� public
/// ����: ���(������������), ���������� ������
/// ������: ��� ������ ������ ������ (����� �������������), ���� ��������� ������, ����� ��������� ������, ����������� ��� ����������, ����������� � �����������, ���������������� ������ ���������� ��������� � �������, �������� � ������ ���������� � ������
/// </summary>
class Triangle_coord : public Shapes
{
private: // ��������� �������

	/// <summary>
	/// ���� ���������� x ��� ������ �������
	/// </summary>
	double x_v1;

	/// <summary>
	/// ���� ���������� y ��� ������ �������
	/// </summary>
	double y_v1;

	/// <summary>
	/// ���� ���������� x ��� ������ �������
	/// </summary>
	double x_v2;

	/// <summary>
	/// ���� ���������� y ��� ������ �������
	/// </summary>
	double y_v2;

	/// <summary>
	/// ���� ���������� x ��� ������� �������
	/// </summary>
	double x_v3;

	/// <summary>
	/// ���� ���������� y ��� ������� �������
	/// </summary>
	double y_v3;

	/// <summary>
	/// ����� ����� ���������� x ��� ������ �������
	/// </summary>
	/// <param name="x - ���������� x"></param>
	void set_x_v1(double x);

	/// <summary>
	/// ����� ����� ���������� y ��� ������ �������
	/// </summary>
	/// <param name="y - ���������� y"></param>
	void set_y_v1(double y);

	/// <summary>
	/// ����� ����� ���������� x ��� ������ �������
	/// </summary>
	/// <param name="x - ���������� x"></param>
	void set_x_v2(double x);

	/// <summary>
	/// ����� ����� ���������� y ��� ������ �������
	/// </summary>
	/// <param name="y - ���������� y"></param>
	void set_y_v2(double y);

	/// <summary>
	/// ����� ����� ���������� x ��� ������� �������
	/// </summary>
	/// <param name="x - ���������� x"></param>
	void set_x_v3(double x);

	/// <summary>
	/// ����� ����� ���������� y ��� ������� �������
	/// </summary>
	/// <param name="y - ���������� y"></param>
	void set_y_v3(double y);
public: // ��������� �������

	/// <summary>
	/// ����������� ��� ����������
	/// </summary>
	Triangle_coord();

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
	Triangle_coord(string& name, double x1, double y1, double x2, double y2, double x3, double y3);

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
	int set_all_vertexs(double x1, double y1, double x2, double y2, double x3, double y3);

	/// <summary>
	/// ����� ������ ���������� x ������ �������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ���������� x ������ �������
	/// </returns>
	double get_x_v1() const;

	/// <summary>
	/// ����� ������ ���������� y ������ �������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ���������� y ������ �������
	/// </returns>
	double get_y_v1() const;

	/// <summary>
	/// ����� ������ ���������� x ������ �������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ���������� x ������ �������
	/// </returns>
	double get_x_v2() const;

	/// <summary>
	/// ����� ������ ���������� y ������ �������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ���������� y ������ �������
	/// </returns>
	double get_y_v2() const;

	/// <summary>
	/// ����� ������ ���������� x ������� �������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ���������� x ������� �������
	/// </returns>
	double get_x_v3() const;

	/// <summary>
	/// ����� ������ ���������� y ������� �������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ���������� y ������� �������
	/// </returns>
	double get_y_v3() const;

	/// <summary>
	/// ���������������� (override) ����� ���������� ���������, const - �� ������ ����� ������
	/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
	/// </summary>
	/// <returns>
	/// �������� ������������
	/// </returns>
	double calc_perim() const override;

	/// <summary>
	/// ���������������� (override) ����� ���������� �������, const - �� ������ ����� ������
	/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
	/// </summary>
	/// <returns>
	/// ������� ������������
	/// </returns>
	double calc_area() const override;

	/// <summary>
	/// ���������������� (override) ����� �������� � ������ ���������� � ������������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ������ � ����������� � ������������
	/// </returns>
	string to_string() const override;
};

/// <summary>
/// ����� ����������� (�� ��������), ������� ������ ������
/// ������� ��������� ��� ���� � ������ ������
/// public Shapes - ���������� ����� ������ ����� ������ ����� � �������������� ����� � ������� ������ ������
/// public - private ���� � ������ �������� private, public ���� � ������ �������� public
/// ����: ���(������������), ����� ������ ������������
/// ������: ��� ������ ������ ������ (����� �������������), ���� ���� ������, ����� ���� ������, ����������� ��� ����������, ����������� � �����������, ���������������� ������ ���������� ��������� � �������, �������� � ������ ���������� � ������
/// </summary>
class Triangle_sides : public Shapes
{
private: // ��������� �������

	/// <summary>
	/// ���� ����� ������ ������� ������������
	/// </summary>
	double Side1;

	/// <summary>
	/// ���� ����� ������ ������� ������������
	/// </summary>
	double Side2;

	/// <summary>
	/// ���� ����� ������� ������� ������������
	/// </summary>
	double Side3;

	/// <summary>
	/// ����� ����� ����� ������ ������� ������������
	/// </summary>
	/// <param name="length - ����� �������"></param>
	void set_side1(double length);

	/// <summary>
	/// ����� ����� ����� ������ ������� ������������
	/// </summary>
	/// <param name="length - ����� �������"></param>
	void set_side2(double length);

	/// <summary>
	/// ����� ����� ����� ������� ������� ������������
	/// </summary>
	/// <param name="length - ����� �������"></param>
	void set_side3(double length);
public: // ��������� �������

	/// <summary>
	/// ����������� ��� ����������
	/// </summary>
	Triangle_sides();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="name - ���"></param>
	/// <param name="side1 - ����� ������ �������"></param>
	/// <param name="side2 - ����� ������ �������"></param>
	/// <param name="side3 - ����� ������� �������"></param>
	Triangle_sides(string& name, double side1, double side2, double side3);

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
	int set_all_sides(double length_s1, double length_s2, double length_s3);

	/// <summary>
	/// ����� ������ ����� ������ ������� ������������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ����� ������ ������� ������������
	/// </returns>
	double get_side1() const;

	/// <summary>
	/// ����� ������ ����� ������ ������� ������������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ����� ������ ������� ������������
	/// </returns>
	double get_side2() const;

	/// <summary>
	/// ����� ������ ����� ������� ������� ������������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ����� ������� ������� ������������
	/// </returns>
	double get_side3() const;

	/// <summary>
	/// ���������������� (override) ����� ���������� ���������, const - �� ������ ����� ������
	/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
	/// </summary>
	/// <returns>
	/// �������� ������������
	/// </returns>
	double calc_perim() const override;

	/// <summary>
	/// ���������������� (override) ����� ���������� �������, const - �� ������ ����� ������
	/// �������: ����� ���� ������ ������������ ������ ���� ������ ������� ������� 
	/// </summary>
	/// <returns>
	/// ������� ����������
	/// </returns>
	double calc_area() const override;

	/// <summary>
	/// ���������������� (override) ����� �������� � ������ ���������� � ������������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ������ � ����������� � ������������
	/// </returns>
	string to_string() const override;
};

/// <summary>
/// ����� �������������, ������� ������ ������
/// ������� ��������� ��� ���� � ������ ������
/// public Shapes - ���������� ����� ������ ����� ������ ����� � �������������� ����� � ������� ������ ������
/// public - private ���� � ������ �������� private, public ���� � ������ �������� public
/// ����: ���(������������), ����� ������ ��������������
/// ������: ��� ������ ������ ������ (����� �������������), ���� ���� ������, ����� ���� ������, ����������� ��� ����������, ����������� � �����������, ���������������� ������ ���������� ��������� � �������, �������� � ������ ���������� � ������
/// </summary>
class Rectangle : public Shapes
{
private: // ��������� �������

	/// <summary>
	/// ���� ����� ������ ������� �������������� (�����)
	/// </summary>
	double Side1;

	/// <summary>
	/// ���� ����� ������ ������� �������������� (������)
	/// </summary>
	double Side2;

	/// <summary>
	/// ����� ����� ����� ������ ������� �������������� (�����)
	/// </summary>
	/// <param name="length - ����� ��������������"></param>
	void set_side1(double length);

	/// <summary>
	/// ����� ����� ����� ������ ������� �������������� (������)
	/// </summary>
	/// <param name="length - ������ ��������������"></param>
	void set_side2(double length);
public: // ��������� �������

	/// <summary>
	/// ����������� ��� ����������
	/// </summary>
	Rectangle();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="name - ���"></param>
	/// <param name="side1 - ����� ��������������"></param>
	/// <param name="side2 - ������ ��������������"></param>
	Rectangle(string& name, double side1, double side2);

	int number() const;

	/// <summary>
	/// ����� ����� ���� ������ ��������������
	/// ������� �����: ����� ������ ������ ���� ������ 0
	/// </summary>
	/// <param name="length_s1 - ����� ��������������"></param>
	/// <param name="length_s2 - ������ ��������������"></param>
	/// <returns>
	/// ��������� ����� (1 - ������, 0 - ��� ������)
	/// </returns>
	int set_all_sides(double length_s1, double length_s2);

	/// <summary>
	/// ����� ������ ����� ��������������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ����� ��������������
	/// </returns>
	double get_side1() const;

	/// <summary>
	/// ����� ������ ������ ��������������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ������ ��������������
	/// </returns>
	double get_side2() const;

	/// <summary>
	/// ���������������� (override) ����� ���������� ���������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// �������� ��������������
	/// </returns>
	double calc_perim() const override;

	/// <summary>
	/// ���������������� (override) ����� ���������� �������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ������� ��������������
	/// </returns>
	double calc_area() const override;

	/// <summary>
	/// ���������������� (override) ����� �������� � ������ ���������� � ��������������, const - �� ������ ����� ������
	/// </summary>
	/// <returns>
	/// ������ � ����������� � ��������������
	/// </returns>
	string to_string() const override;
};

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
double calc_side(double first_x, double first_y, double second_x, double second_y);

/// <summary>
/// ������� �������� ������� �������
/// </summary>
//void test();