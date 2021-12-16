#include "Quadr_Eq.h"

Quadr_Eq::Quadr_Eq(double a, double b, double c):a(a), b(b), c(c)
{
	this->calculation();
}

Quadr_Eq::Quadr_Eq(const Quadr_Eq& copy):a(copy.a), b(copy.b), c(copy.c)
{
	this->calculation();
}

Quadr_Eq::Quadr_Eq(Quadr_Eq&& move) noexcept
{
	swap(a, move.a);
	swap(b, move.b);
	swap(c, move.c);
	swap(result, move.result);
	swap(Discriminant, move.Discriminant);
	swap(count_of_results, move.count_of_results);
}

Quadr_Eq::~Quadr_Eq()
{
	delete[] result;
}

 

Quadr_Eq& Quadr_Eq::operator=(Quadr_Eq move)// 
{
	if (this == &move)return*this;   // 
	else {
		swap(a, move.a);
		swap(b, move.b);
		swap(c, move.c);
		swap(result, move.result);
		swap(Discriminant, move.Discriminant);
		swap(count_of_results, move.count_of_results);
	}
	return*this;
}

void Quadr_Eq::print() const
{
	cout << "Дискриминант: " << Discriminant << '\n';
	if (this->result == nullptr)
	{
		cout << "Уравнение решений не имеет!\n";
	}
	else if (count_of_results == 1)
	{
		cout << "Решение: " << result[0] << '\n';
	}
	else
	{
		for (size_t i = 0; i < count_of_results; i++)
		{
			cout << "Решение " << i + 1 << " : " << result[i] << '\n';
		}
	}
}

int Quadr_Eq::getDiscr() const
{
	return Discriminant;
}

void Quadr_Eq::setA(int a)
{
	this->a = a;
}

void Quadr_Eq::setB(int b)
{
	this->b = b;
}

void Quadr_Eq::setC(int c)
{
	this->c = c;
}

double Quadr_Eq::getA() const
{
	return a;
}

double Quadr_Eq::getB() const
{
	return b;
}

double Quadr_Eq::getC() const
{
	return c;
}

double* Quadr_Eq::getResults() const
{
	return result;
}

constexpr inline void Quadr_Eq::calculation() const
{
	
	if (a != 0 && b != 0 && c != 0)//полное кв.уравнение
	{
		this->Discriminant =  (pow(b, two) - (static_cast<double>(four) * a * c));
		if (Discriminant < 0)
		{
			result = nullptr;
		}
		else if (Discriminant == 0)
		{
			count_of_results++;
			result = new double;
			*result = (-b) / (two * a);
		}
		else if(Discriminant>0)
		{
			count_of_results += two;
			result = new double[two];
			result[0] = (-b + sqrt(Discriminant)) / (two * a);
			result[1] = (-b - sqrt(Discriminant)) / (two * a);
		}
	}
	else if (a == 0 && b == 0&&c==0)
	{
		 
		result = nullptr;
	}
	else if ((a!=0)&&(b!=0)&& (c == 0))  //уравнение вида (a*x^2)+(b*x) 
	{
		Discriminant = pow(b, two);
		if (((a > 0) && (b < 0)) || ((a < 0) && (b > 0)))
		{
			count_of_results += two;
			result = new double[two];
			result[0] = 0;
			result[1] = static_cast<double>(sqrt(b /(two*a)));
		}
		else {
			count_of_results++;
			result = new double;
			*result = 0;
		}
	}
	else if (a != 0 && b == 0 && c != 0)
	{
		if ((a > 0 && c < 0) || (a < 0 && c>0))
		{
			result = nullptr;
		}
		else {
			count_of_results += two;
			result = new double[two];
			result[0] = sqrt(c / a);
			result[1] = -sqrt(c / a);
		}
	}
}
