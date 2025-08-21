#include<iostream>
using namespace std ;

int main(){
/*
    int n ;
    cout << "Enter any number " << endl ;
    cin >> n ;
int i ;
i=1 ;

    while (i<=n)

    {
        cout << " " << endl ;
        
      cout << i << " "  << endl ;
      i = i+1 ;

    }
  
 
  
  cout << "Code to print sum of n numbers " << endl ;
  int n ;
  cout << "Enter any number " << endl ;
  cin >> n ;

  int i , sum = 0;
  i = 1 ;
  while(i<=n){
    sum = sum + i ;
    i = i + 1;
   
  }
 cout << "The sum of first " << n << " numbers is :  " << sum << endl ;
*/

cout << " Code to check for Prime number : " << endl ;
cout << " Enter any number : " << endl;
int n ;

cin >> n ;
int i = 2;

while (i<n){
    if (n%i==0){
        cout << n << "  is not Prime number " << " for " << i  << endl ;

    }
    
    
    i=i+1;


}

}
