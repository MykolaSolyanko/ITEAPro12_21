#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  /*
  HOMEWORK
 ax^2 + bx + c = 0
 */

int a, b, c, discriminant, x1, x2; 
cout<<endl<<"Enter values: "<<endl<<"a = ";
cin>>a;
cout<<"b = ";
cin>>b;
cout<<"c = ";
cin>>c;


discriminant = (b*b)-(4*a*c);


if(discriminant<0) {cout<<"No roots of the equation";}

if(discriminant==0){
cout<<"X1 = "<<double(-b/(2*a));
}

if(discriminant>0){
cout<<"X1 = "<<double((-b-sqrt(discriminant))/(2*a))<<endl<<"x2 = "<<double((-b+sqrt(discriminant))/(2*a))<<endl;
}
return 0;
}
