#include <iostream>

int main(){
    int a = 3;
    float b = 10.3;

    std::cout << static_cast<int>(b / a);

    return 0;
}