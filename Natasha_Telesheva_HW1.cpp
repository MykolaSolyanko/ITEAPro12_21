
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int kConst1{ 2 };
    const int kConst2{ 4 };

    double a{}, b{}, c{}, d{}, x1{}, x2{};
    cout <<" Please enter numbers: a,b,c in range[2..255]\n";
    cin >> a;
    if (a == 0) {
        cout << "The equation is not quadratic" << endl;
        return 0;
    }
    cin>> b >> c;
    if ((a < 2) || (b< 2) || (c< 2) || (a  > 255) || (b>255) ||(c>255) ){
        cout << "You entered an incorrect number, try entering the number again";
        return 0;
    }
    cout << "Your numbers:" << a << " "<< b << " " << " " << c << endl;;

    d = b * b - kConst2 * a * c;
   
    if (d > 0) {
        x1 = ((-b) + sqrt(d)) / (kConst1 * a);
        x2 = ((-b) - sqrt(d)) / (kConst1 * a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    if (d == 0) {
        x1 = -(b / (kConst1 * a));
        cout << "x1 = x2 = " << x1 << "\n";
    }
    if (d < 0) {
        cout << "D < 0, There are no real roots of the equation";
    }
  return 0;
}

