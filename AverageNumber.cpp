#include <iostream>

int main() {
    int a_input{};
    std::cout<<"Enter your number:\n";
    std::cin>>a_input;

    int count{};//сумма чисел
    int countNum{};//кол-во чисел

    while (a_input){
    count+=a_input%10;
    countNum+=1;
    a_input/=10;
}
    std::cout<<"Sum of nubers: "<<count<<"\n";

    const int averageNum{count/countNum};
   
    std::cout<<"Average number: "<<averageNum;
   
    return 0;
}
