#include<bits/stdc++.h>
using namespace std ;

// Sum of first N numbers using recursion 
int sumN(int n ){
    if (n == 0 ) return 0 ;

    return n+sumN(n-1);

};




int main(){
    int n ;
    cout << "Enter value of N: "<< " " ;
    cin >> n ;
    cout << "the sum of first N numbers : "<< sumN(n) << endl;

    return 0;
}