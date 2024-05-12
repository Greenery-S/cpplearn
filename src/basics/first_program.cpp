#include <iostream>

int main(){
    int x{};
    std::cout<<"Enter a number:";
    std::cin>>x;
    std::cout<<"Double "<<x<<" is "<<2*x<<'\n';
    std::cout<<"Triple "<<x<<" is "<<3*x<<'\n';
    return 0;
}
