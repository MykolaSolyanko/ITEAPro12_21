#include <iostream>

int main() {
    std::cout<<"Enter quantity of numbers ,but no more than 50 "<<"\n";
    int kol_vo;
    std::cin>>kol_vo;
    if(kol_vo>50){
        std::cout<<"Error!Enter quantity of numbers ,but no more than 50"<<"\n";
        return -1;
    }

    std::cout << "Enter numbers in range: -60<=x<=90 "<<"\n";
    int i_input;
    if(i_input>50){
        std::cout<<"Error!Enter numbers in range: -60<=x<=90"<<"\n ";
        return -1;
    }

    int count{};
    for(int i{};i<kol_vo;++i) {
        std::cin >> i_input;
        if (i_input%2!=0){
            count+=i_input;

        }
    }
    std::cout<<"Count of numbers: "<<count<<"\n";
    return  0;
}
