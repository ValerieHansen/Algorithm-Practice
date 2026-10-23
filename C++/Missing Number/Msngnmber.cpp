using namespace std;
#include <iostream>
#include <numeric>

void solve(int x, int arr[]){
    
    int expected, actual, remainder;
    expected = (x*(x+1))/2; // Determing the expected value since we should have every number 1 > x

    
    actual = accumulate(arr, arr + x - 1, 0); // Sum the provided array

    remainder = expected - actual;
    
    cout << remainder;

    return;
}

int main(){

    int size = 5;
    int arr[] = {2, 3, 1, 5};

    solve(size, arr);


    return 0;
}