//Understand recursion by print something N times
#include<bits/stdc++.h>
using namespace std;

void ntimes(int n){
    if (n == 0){
        return;
    };
    ntimes(n-1);
    cout << n << "  " ;
    };


//Print name N times using recursion

void name(int n){
    for(int i = 1 ; i <= n ; i++){
        cout << i <<". Gaurav on recursion" << endl;
    }

}

// Print 1 to N using Recursion

void one2n(int n ){
    if (n == 0){
        return;
    }
    one2n(n-1);
    cout << n << " ";


    }


// Print N to 1 using Recursion

void n2one(int n ){
        if (n < 1){
        return ;
    }
    cout << n << " ";
    
    n2one(n-1);

    cout << n ;

}





int main(){
    int n ;
    // cout << "Enter value of n :" ;
    // cin >> n ;
    n2one(10);
}