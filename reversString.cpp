#include <iostream>
#include <string>
#include <algorithm>

void reverse(std::string str){
    std::reverse(str.begin(), str.end());
    std::cout << str<<"\n";
}

int main()
{
    std::string str = "";

    std::cout<<"Enter your string: \n";

    std::cin>>str;

    reverse(str);

    return 0;
}
