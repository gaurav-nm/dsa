#include<bits/stdc++.h>
using namespace std ;

// Sum of first N numbers using recursion 
int sumN(int n ){
    if (n == 0 ) return 0 ;

    return n+sumN(n-1);

};


// Factorial of a given number

int factorial(int n ){
    if (n == 1 ){
        return 1;
    }
    return n * factorial(n-1);
}



// Reverse a given Array using recursion 

void reversearray(vector<int>& arr , int left , int right){
    if (left >=  right){
        return;
    }

    swap(arr[left], arr[right]);

    reversearray(arr, left+1, right-1);

}

// Check if the given strin is Palindrome or not 
bool isPalindrome(string &s, int left , int right ){
    if (left >= right ){
        return true;
    }
    if (s[left] != s[right] ){
        return false;
    }

    return isPalindrome(s, left+1 , right -1);
}


// Print fibonacci Series upto Nth term 

int fib(int n){
    if ( n <= 1 ){
        return n ;
    }

    return fib(n-1)+fib(n-2);
}


int main(){
    // print fibonacci series upto Nth terms 
    int n = 1000;

    if (n >= 1){
        cout << 0 << "  ";
    }
    if ( n >= 2 ){
        cout << 1 << "  ";
    }

    int first = 0;
    int second = 1;

    for ( int i = 2 ; i < n ; i++ ){
        int third = first + second;

        cout << third << "  ";

        first = second;
        second = third;

    }
    cout << endl ;










    // for (int i = 0 ; i < n; i++){
    //     cout << fib(i) << " " ;
        
    // }
    // cout << endl ;






    // string s = "MADAM";
    // if( isPalindrome(s, 0 , s.size()-1)){
    //     cout<< "Palindrome";
    // }
    // else    cout << "Not Palindrome"<< endl;

    // vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    // reversearray(arr, 0 , arr.size()-1);

    // for (auto x : arr){
    //     cout << x << "  ";
    // }

    
}