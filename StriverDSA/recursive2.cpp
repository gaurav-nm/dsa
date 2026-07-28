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

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    reversearray(arr, 0 , arr.size()-1);

    for (auto x : arr){
        cout << x << "  ";
    }

    
}