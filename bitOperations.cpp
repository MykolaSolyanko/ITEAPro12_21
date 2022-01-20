#include <iostream>

void bitCount(size_t num){
    int count{};
    
    while  (num){
        
        if(num & 1 != 0){
            count +=1;
            return;
        }
        num>>=1;
    }
    std::cout<<count;
}


int main() {
    std::cout<<"range number>=0 \n";
    long long num_input;
    std::cin>>num_input;
    bitCount(num_input);
    return 0;
    }
