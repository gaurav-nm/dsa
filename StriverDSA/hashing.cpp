#include<bits/stdc++.h>
using namespace std ;

// Number Hasing 

int main(){
    int n ;
    cout << "Enter the number of elements in array: " ;
    cin >> n ;

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cout << "Enter "<< i+1 << "Element : " ;
        cin >> arr[i];
    }
// precompute hashing 
    int hash[1000] = {0};

    for (int i = 0 ; i < n ; i++){
        hash[arr[i]]++ ;
    }

    int q;
    cin >> q ;
    while(q--){
        int number ;
        cin >> number ;

        cout << hash[number] << endl ;
    }






    return 0;
}