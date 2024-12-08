#pragma once
#include <string>

using namespace std;

/// <summary>
/// класс фигура(предок)
/// поля: имя
/// методы: конструктор без параметров, конструктор с параметрами, ввод имени, вывод имени, метод перевода в строку информации о фигуре, абстрактные методы вычисления периметра и площади
/// </summary>
class Shapes
{
private: // приватная область

	/// <summary>
	/// поле имя
	/// </summary>
	string name;
public: // публичная область

	/// <summary>
	/// конструктор без параметров
	/// </summary>
	Shapes();

	/// <summary>
	/// конструктор с параметрами
	/// </summary>
	/// <param name="name - имя"></param>
	Shapes(string& name);

	int number() const;

	/// <summary>
	/// метод ввода имени
	/// правило ввода: вводимое имя не должно быть пустым или просто пробелом
	/// </summary>
	/// <param name="name - имя"></param>
	/// <returns>
	/// результат ввода (1 - ошибка, 0 - нет ошибки)
	/// </returns>
	int set_name(string& name);

	/// <summary>
	/// метод вывода имени, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// имя
	/// </returns>
	string get_name() const;

	/// <summary>
	/// метод перевода в строку информации о фигуре 
	/// const - не меняет полей класса
	/// virtual - виртуальный метод (для динамического полиморфизма)
	/// </summary>
	/// <returns>
	/// возвращает строку с информацией о фигуре
	/// </returns>
	virtual string to_string() const;

	/// <summary>
	/// абстрактный (без реализации) метод вычисления периметра (для того, чтобы в потомках класса был переопределен этот метод)
	/// const - не меняет полей класса
	/// virtual - виртуальный метод (для динамического полиморфизма)
	/// </summary>
	/// <returns>
	/// периметр фигуры
	/// </returns>
	virtual double calc_perim() const = 0;

	/// <summary>
	/// абстрактный (без реализации) метод вычисления площади (для того, чтобы в потомках класса был переопределен этот метод)
	/// const - не меняет полей класса
	/// virtual - виртуальный метод (для динамического полиморфизма)
	/// </summary>
	/// <returns>
	/// площадь фигуры
	/// </returns>
	virtual double calc_area() const = 0;
};

/// <summary>
/// класс треугольник (по координатам), потомок класса фигура
/// потомок наследует все поля и методы предка
/// public Shapes - определяет какой доступ имеет данный класс к унаследованным полям и методам класса фигура
/// public - private поля и методы остаются private, public поля и методы остаются public
/// поля: имя(унаследовано), координаты вершин
/// методы: все методы класса фигура (кроме конструкторов), ввод координат вершин, вывод координат вершин, конструктор без параметров, конструктор с параметрами, переопределенные методы вычисления периметра и площади, перевода в строку информации о фигуре
/// </summary>
class Triangle_coord : public Shapes
{
private: // приватная область

	/// <summary>
	/// поле координаты x для первой вершины
	/// </summary>
	double x_v1;

	/// <summary>
	/// поле координаты y для первой вершины
	/// </summary>
	double y_v1;

	/// <summary>
	/// поле координаты x для второй вершины
	/// </summary>
	double x_v2;

	/// <summary>
	/// поле координаты y для второй вершины
	/// </summary>
	double y_v2;

	/// <summary>
	/// поле координаты x для третьей вершины
	/// </summary>
	double x_v3;

	/// <summary>
	/// поле координаты y для третьей вершины
	/// </summary>
	double y_v3;

	/// <summary>
	/// метод ввода координаты x для первой вершины
	/// </summary>
	/// <param name="x - координата x"></param>
	void set_x_v1(double x);

	/// <summary>
	/// метод ввода координаты y для первой вершины
	/// </summary>
	/// <param name="y - координата y"></param>
	void set_y_v1(double y);

	/// <summary>
	/// метод ввода координаты x для второй вершины
	/// </summary>
	/// <param name="x - координата x"></param>
	void set_x_v2(double x);

	/// <summary>
	/// метод ввода координаты y для второй вершины
	/// </summary>
	/// <param name="y - координата y"></param>
	void set_y_v2(double y);

	/// <summary>
	/// метод ввода координаты x для третьей вершины
	/// </summary>
	/// <param name="x - координата x"></param>
	void set_x_v3(double x);

	/// <summary>
	/// метод ввода координаты y для третьей вершины
	/// </summary>
	/// <param name="y - координата y"></param>
	void set_y_v3(double y);
public: // публичная область

	/// <summary>
	/// конструктор без параметров
	/// </summary>
	Triangle_coord();

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
	Triangle_coord(string& name, double x1, double y1, double x2, double y2, double x3, double y3);

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
	int set_all_vertexs(double x1, double y1, double x2, double y2, double x3, double y3);

	/// <summary>
	/// метод вывода координаты x первой вершины, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// координата x первой вершины
	/// </returns>
	double get_x_v1() const;

	/// <summary>
	/// метод вывода координаты y первой вершины, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// координата y первой вершины
	/// </returns>
	double get_y_v1() const;

	/// <summary>
	/// метод вывода координаты x второй вершины, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// координата x второй вершины
	/// </returns>
	double get_x_v2() const;

	/// <summary>
	/// метод вывода координаты y второй вершины, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// координата y второй вершины
	/// </returns>
	double get_y_v2() const;

	/// <summary>
	/// метод вывода координаты x третьей вершины, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// координата x третьей вершины
	/// </returns>
	double get_x_v3() const;

	/// <summary>
	/// метод вывода координаты y третьей вершины, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// координата y третьей вершины
	/// </returns>
	double get_y_v3() const;

	/// <summary>
	/// переопределенный (override) метод вычисления периметра, const - не меняет полей класса
	/// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
	/// </summary>
	/// <returns>
	/// периметр треугольника
	/// </returns>
	double calc_perim() const override;

	/// <summary>
	/// переопределенный (override) метод вычисления площади, const - не меняет полей класса
	/// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
	/// </summary>
	/// <returns>
	/// площадь треугольника
	/// </returns>
	double calc_area() const override;

	/// <summary>
	/// переопределенный (override) метод перевода в строку информации о треугольнике, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// строка с информацией о треугольнике
	/// </returns>
	string to_string() const override;
};

/// <summary>
/// класс треугольник (по сторонам), потомок класса фигура
/// потомок наследует все поля и методы предка
/// public Shapes - определяет какой доступ имеет данный класс к унаследованным полям и методам класса фигура
/// public - private поля и методы остаются private, public поля и методы остаются public
/// поля: имя(унаследовано), длины сторон треугольника
/// методы: все методы класса фигура (кроме конструкторов), ввод длин сторон, вывод длин сторон, конструктор без параметров, конструктор с параметрами, переопределенные методы вычисления периметра и площади, перевода в строку информации о фигуре
/// </summary>
class Triangle_sides : public Shapes
{
private: // приватная область

	/// <summary>
	/// поле длины первой стороны треугольника
	/// </summary>
	double Side1;

	/// <summary>
	/// поле длины второй стороны треугольника
	/// </summary>
	double Side2;

	/// <summary>
	/// поле длины третьей стороны треугольника
	/// </summary>
	double Side3;

	/// <summary>
	/// метод ввода длины первой стороны треугольника
	/// </summary>
	/// <param name="length - длина стороны"></param>
	void set_side1(double length);

	/// <summary>
	/// метод ввода длины второй стороны треугольника
	/// </summary>
	/// <param name="length - длина стороны"></param>
	void set_side2(double length);

	/// <summary>
	/// метод ввода длины третьей стороны треугольника
	/// </summary>
	/// <param name="length - длина стороны"></param>
	void set_side3(double length);
public: // публичная область

	/// <summary>
	/// конструктор без параметров
	/// </summary>
	Triangle_sides();

	/// <summary>
	/// конструктор с параметрами
	/// </summary>
	/// <param name="name - имя"></param>
	/// <param name="side1 - длина первой стороны"></param>
	/// <param name="side2 - длина второй стороны"></param>
	/// <param name="side3 - длина третьей стороны"></param>
	Triangle_sides(string& name, double side1, double side2, double side3);

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
	int set_all_sides(double length_s1, double length_s2, double length_s3);

	/// <summary>
	/// метод вывода длины первой стороны треугольника, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// длина первой стороны треугольника
	/// </returns>
	double get_side1() const;

	/// <summary>
	/// метод вывода длины второй стороны треугольника, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// длина второй стороны треугольника
	/// </returns>
	double get_side2() const;

	/// <summary>
	/// метод вывода длины третьей стороны треугольника, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// длина третьей стороны треугольника
	/// </returns>
	double get_side3() const;

	/// <summary>
	/// переопределенный (override) метод вычисления периметра, const - не меняет полей класса
	/// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
	/// </summary>
	/// <returns>
	/// периметр треугольника
	/// </returns>
	double calc_perim() const override;

	/// <summary>
	/// переопределенный (override) метод вычисления площади, const - не меняет полей класса
	/// правило: сумма двух сторон треугольника должна быть больше третьей стороны 
	/// </summary>
	/// <returns>
	/// площадь треуголька
	/// </returns>
	double calc_area() const override;

	/// <summary>
	/// переопределенный (override) метод перевода в строку информации о треугольнике, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// строка с информацией о треугольнике
	/// </returns>
	string to_string() const override;
};

/// <summary>
/// класс прямоугольник, потомок класса фигура
/// потомок наследует все поля и методы предка
/// public Shapes - определяет какой доступ имеет данный класс к унаследованным полям и методам класса фигура
/// public - private поля и методы остаются private, public поля и методы остаются public
/// поля: имя(унаследовано), длины сторон прямоугольника
/// методы: все методы класса фигура (кроме конструкторов), ввод длин сторон, вывод длин сторон, конструктор без параметров, конструктор с параметрами, переопределенные методы вычисления периметра и площади, перевода в строку информации о фигуре
/// </summary>
class Rectangle : public Shapes
{
private: // приватная область

	/// <summary>
	/// поле длины первой стороны прямоугольника (длина)
	/// </summary>
	double Side1;

	/// <summary>
	/// поле длины второй стороны прямоугольника (ширина)
	/// </summary>
	double Side2;

	/// <summary>
	/// метод ввода длины первой стороны прямоугольника (длина)
	/// </summary>
	/// <param name="length - длина прямоугольника"></param>
	void set_side1(double length);

	/// <summary>
	/// метод ввода длины второй стороны прямоугольника (ширина)
	/// </summary>
	/// <param name="length - ширина прямоугольника"></param>
	void set_side2(double length);
public: // публичная область

	/// <summary>
	/// конструктор без параметров
	/// </summary>
	Rectangle();

	/// <summary>
	/// конструктор с параметрами
	/// </summary>
	/// <param name="name - имя"></param>
	/// <param name="side1 - длина прямоугольника"></param>
	/// <param name="side2 - ширина прямоугольника"></param>
	Rectangle(string& name, double side1, double side2);

	int number() const;

	/// <summary>
	/// метод ввода всех сторон прямоугольника
	/// правило ввода: длины сторон должны быть больше 0
	/// </summary>
	/// <param name="length_s1 - длина прямоугольника"></param>
	/// <param name="length_s2 - ширина прямоугольника"></param>
	/// <returns>
	/// результат ввода (1 - ошибка, 0 - нет ошибок)
	/// </returns>
	int set_all_sides(double length_s1, double length_s2);

	/// <summary>
	/// метод вывода длины прямоугольника, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// длина прямоугольника
	/// </returns>
	double get_side1() const;

	/// <summary>
	/// метод вывода ширины прямоугольника, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// ширина прямоугольника
	/// </returns>
	double get_side2() const;

	/// <summary>
	/// переопределенный (override) метод вычисления периметра, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// периметр прямоугольника
	/// </returns>
	double calc_perim() const override;

	/// <summary>
	/// переопределенный (override) метод вычисления площади, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// площадь прямоугольника
	/// </returns>
	double calc_area() const override;

	/// <summary>
	/// переопределенный (override) метод перевода в строку информации о прямоугольнике, const - не меняет полей класса
	/// </summary>
	/// <returns>
	/// строка с информацией о прямоугольнике
	/// </returns>
	string to_string() const override;
};

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
double calc_side(double first_x, double first_y, double second_x, double second_y);

/// <summary>
/// функция проверки методов классов
/// </summary>
//void test();