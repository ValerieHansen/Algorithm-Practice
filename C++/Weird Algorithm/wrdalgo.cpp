#include <iostream>
using namespace std;

int solve(int inp) {
    int x;
    x = inp;
        cout << x << ' ';
    while(x != 1){
        if(x % 2 == 0){ // Using modulo 2 to see if odd or even; If no remember is even
        x = x/2;
        } else { // Else there is remainder of 1, which is odd
        x = x*3;
        x++;
        }
        cout << x << ' ';
    }
    return x;
}

int main() {
    solve(3);
    return 0;
};