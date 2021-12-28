#include <iostream>
constexpr int two{ 2 }, four{ 4 };// const-values

 
int main()
{
	float a{}, b{}, c{};// 
   //accept data from user
	std::cout << "Enter A: "; std::cin >> a;
	std::cout << "Enter B: "; std::cin >> b;
	std::cout << "Enter C: "; std::cin >> c;
  
	float* res = nullptr;//result`s pointer
	float discriminant = std::move(pow(b, two) - static_cast<double> (four )* a * c);//calculation of discriminant
	if (discriminant < 0)
	{
		if (a == 0)
		{
			res = new float;
			*res = b / (-c);
			delete res;
		}
		else {
			res = nullptr;
			std::cout << "No results!\n";
		}
	}
	else if (discriminant == 0)
	{
		res = new float;
		*res = (-b / (two * a));
		std::cout << "result: " << *res << '\n';
		delete res;
	}
	else {
		res = new float[2];
		res[0] = (-b + sqrt(discriminant)) / (two * a);
		std::cout << "result 1: " << res[0] << '\n';
		res[1] = (-b - sqrt(discriminant)) / (two * a);
		std::cout << "result 2: " << res[1];
		delete[] res;
	}
}