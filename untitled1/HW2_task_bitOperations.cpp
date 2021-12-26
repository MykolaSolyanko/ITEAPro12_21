#include <iostream>


int main() {
    int a_input;
    std::cin>>a_input;

    int kol_vo{};

    while  (a_input){
        if(a_input & 1 != 0){
            kol_vo +=1;
        }
        a_input>>=1;
    }

    std::cout<<kol_vo;
    return 0;
}
