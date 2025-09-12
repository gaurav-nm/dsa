#include<iostream>
using namespace std ;

int main(){ 

/*
    cout << "Enter the value of n  :  " << endl ;

    int n  ;
    cin >> n ;


    for (int i=1; i <= n ; i ++){
        for (int j=1 ; j<= n ; j++ ){
            cout << j << " " ;

        }
        cout << endl ;

    }

    for (int i = 1 ; i <= n ; i ++ ){
        for (int j = 1 ; j  <= n ; j ++ ){
            cout << "* " ;

        }
        cout << endl ;

    }
    return 0 ;




int n;
cout << "Enter the value of column : " ;
cin >> n ;

int num ;
cout << "Enter the starting nhumber  : ";
cin >> num ;


for (int i = 0 ; i < n ; i ++ ){
    for(int j =0 ; j < n ; j++ ){
        cout << num << " " ;
        num ++ ;

    }
    cout << endl ;
}
return 0 ;

*/

/*
int n=4;

for (int i=0  ;i<=n ; i++){
    for (int j = 1 ; j < (i+1) ; j++ ){
        cout << (i );  
    }
    cout << endl ;

}
 return 0 ;


int n=5 ;
for (int i = 0 ; i <n ; i++ ){
    //spaces 
    for (int j=0 ; j<n-i-1 ; j++){
        cout << " " ;
    }

    // numbers ;
    for(int j=1 ; j<= i+1 ; j++  ){
        cout << j ;

    }
    // remaining numbers 
    for (int j =1 ; j>0 ; j--){
        cout << j ;

    }
    cout << endl ;

}

return 0 ;
*/

cout << "Hollow Pyramid " << endl ;

int n=4 ;

//top 
for(int i=0 ; i<n ; i ++ ){
    //space 
    for (int j=0 ; j<n-i-1 ; j++){
        cout << " " ;

    }
    cout << "* ";

    if (i!=0){
         for (int j=0 ; j<n-i-1 ; j++){
        cout << "*" ;
        
        

    }

   cout << "*";
}

 cout << endl ;
}
return 0 ;
}