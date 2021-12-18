#pragma once
#include<cmath>	
#include<iostream>
using namespace std;

constexpr size_t two{ 2 }, four{ 4 };// ��������� ����� 2 � 4(�� �������, �� ���� ��� ���� ������, �� ������� � �������� � ������ calculation

class Quadr_Eq
{
	double a{}, b{}, c{}; // ����������� �, B � ����� �
	mutable double* result = nullptr;//��������� �� ����������(mutable ������������ ��� ����, ���� ����� ����������� �������� ���������� ���� � ����������� �������...
	mutable double Discriminant=0;// ... �� ���������� ��� ���� ����, ������� ���������������� ����� �����������
	mutable size_t count_of_results = 0;

	constexpr inline void calculation()const;// ������� ����� ����������� ����� ����� ����������� ������ ������������� mutable-����, inline - ��� �����������, constexpr - �� ���� ��� ����, �� ��� ��������
public:
	Quadr_Eq() = delete; //����������� �� ���������, ��������� �������� �������������������� ��������
	Quadr_Eq(double a, double b, double c);//����������� � �����������(��� ������������� ������� �� ������ ������, ���������� �����)
	Quadr_Eq(const Quadr_Eq& copy);//����������� �����������(������� "3" �  "5") 
	Quadr_Eq(Quadr_Eq&& move)noexcept;// ����������� �����������(������� 5)
	~Quadr_Eq();// ����������(������� "3" � "5")

	Quadr_Eq& operator=(Quadr_Eq obj); // ������������� ������� ������������(�� ���� ��������� ��������� ��� ��������� � ����� ����, ��..)
	
	 
	void print()const; //����� � �������
	
	int getDiscr()const;//�������� ���� "������������"
	
	void setA(int a);// ������� ���� a
	void setB(int b);// .. b 
	void setC(int c); //.. c

	double getA()const; //�������� ���� �
	double getB()const; //.. b
	double getC()const; //..c
	double* getResults()const; // .. ����������


};

