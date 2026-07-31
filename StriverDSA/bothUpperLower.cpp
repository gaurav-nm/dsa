#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cout << "Enter the String : ";
    cin >> s;


    //precompute hash table 
    int hash[256]={0};
    for (int i = 0 ; i < s.size() ; i++ ){
        hash[s[i]]++ ;
        
    }

    int q;
    cout << "Enter number of query : " ;
    cin >> q ;
    while(q--){
        char c ;
        cout << "Enter Character to search : " ;
        cin >> c ;

        //fetch
        cout << c << " --> " << hash[c] << endl;

    }
    
    return 0;
}