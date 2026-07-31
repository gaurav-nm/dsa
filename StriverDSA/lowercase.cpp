#include<bits/stdc++.h>
using namespace std ;

int main(){
    cout<< "Enter complete string : ";
    string s;
    cin >> s;


    //precompute hash table 
     int hash[26] = {0};
     for (int i = 0 ; i < s.size() ; i++ ){
        hash[s[i]-'a']++;
     }
     cout << "How many characters you want to search ? : ";

    int q ;
    cin >> q ;

    while ( q--){
        char c;
        cout << "Enter the Character : " ;
        cin >> c ;
        cout << c << " --> " << hash[ c- 'a' ] << endl;

    }
    
    
    
    
    return 0;
}