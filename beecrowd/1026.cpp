#include <bits/stdc++.h>

int main(){
    unsigned int x, y;

    while(std::cin >> x >> y){
        unsigned int ans = x ^ y;
        std::cout << ans << "\n";
    }
    return 0;
}