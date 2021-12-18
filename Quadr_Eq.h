#pragma once
#include<cmath>	
#include<iostream>
using namespace std;

constexpr size_t two{ 2 }, four{ 4 };// константы чисел 2 и 4(не понимаю, дл чего это было задано, но написал и применил в методе calculation

class Quadr_Eq
{
	double a{}, b{}, c{}; // коэфициенты ј, B и число —
	mutable double* result = nullptr;//указатель на результаты(mutable используетс€ дл€ того, чтоб иметь возможность измен€ть помеченные пол€ в константных методах...
	mutable double Discriminant=0;// ... не затрагива€ при этом пол€, которые инициализируютс€ через конструктор
	mutable size_t count_of_results = 0;

	constexpr inline void calculation()const;// объ€вил метод константным чтобы иметь возможность мен€ть »— Ћё„»“≈Ћ№Ќќ mutable-пол€, inline - дл€ оптимизации, constexpr - не знаю дл€ чего, но оно работает
public:
	Quadr_Eq() = delete; //конструктор по умолчанию, запрещаем создание неинициализированных объектов
	Quadr_Eq(double a, double b, double c);//конструктор с параметрами(дл€ инициализации объекта на основе данных, полученных извне)
	Quadr_Eq(const Quadr_Eq& copy);//конструктор копировани€(правило "3" и  "5") 
	Quadr_Eq(Quadr_Eq&& move)noexcept;// конструктор перемещени€(правило 5)
	~Quadr_Eq();// деструктор(правило "3" и "5")

	Quadr_Eq& operator=(Quadr_Eq obj); // универсальный операор присваивани€(не знаю насколько правильно его описывать в таком виде, но..)
	
	 
	void print()const; //вывод в консоль
	
	int getDiscr()const;//аксессор пол€ "дискриминант"
	
	void setA(int a);// мутатор пол€ a
	void setB(int b);// .. b 
	void setC(int c); //.. c

	double getA()const; //аксессор пол€ а
	double getB()const; //.. b
	double getC()const; //..c
	double* getResults()const; // .. результаты


};

