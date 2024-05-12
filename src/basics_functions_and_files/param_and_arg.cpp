#include <iostream>
int getValueFromUser(){
    std::cout<<"Enter an integer: ";
    int x{};
    std::cin>>x;
    return x;
}

int doubleValue(int x){
    return x*2;
}

void printValue(int x){
    std::cout<<"Double the integer: "<<x<<'\n';
}

int main(){
    printValue(doubleValue(getValueFromUser()));
    return 0;
}
