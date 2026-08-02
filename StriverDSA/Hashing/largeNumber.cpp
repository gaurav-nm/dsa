#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the Number of elements in array :";
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cout << "Enter " << i << " index element :";
        cin >> arr[i];
    }

    //precompute 
    map<int , int >mp;
    for ( int i = 0 ; i < n ; i++ ){
        mp[arr[i]]++ ;

    }

    // //iterate over map ;
    // for ( auto i : mp){
    //     cout << i.first << " --> " << i.second << endl;
    // }

    // query ;

    int q;
    cout << "Enter the number of query :" ;
    cin >> q ;
     while (q--){
        int number ;
        cout << "Enter the number : ";
        cin >> number ;

        //fetch
        cout << mp[number] << endl ;

     }


    return 0 ;
}