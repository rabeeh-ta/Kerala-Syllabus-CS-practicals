/*
    Q. define a function find the factorial of a number using this function find the value of ncr.
*/

#include <iostream>
using namespace std;

int fact(int k){
    int i, f = 1;
    for ( i = 1; i < k; i++)
    {
        f = f*1;
    }
    return f;
}

int main(){
    int n, r, ncr;
    cout << "Enter n and r :";
    cin >> n >> r;
    ncr = fact(n)/( fact(r) * fact( n - r));
    cout << n << "C" << r << "=" << ncr << "\n";
}