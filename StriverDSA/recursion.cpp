//Understand recursion by print something N times
#include<bits/stdc++.h>
using namespace std;

void name(int n){
    for(int i = 1 ; i <= n ; i++){
        cout << i <<". Gaurav on recursion" << endl;
    }

}

int main(){
    int n ;
    cin >> n ;
    name(n);
}