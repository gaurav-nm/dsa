#include <iostream>
using namespace std ;

int main(){
    /*
    cout << "This code is to check wheather a numner is positive or not " << endl ;
    
    cout << "Enter any number " << endl ;
    int a ;

    cin >> a ;

if (a > 0)
{
    cout << "The number is positive" << endl ;

}
else {
    cout << "The number is not positive" << endl ;

}
*/

cout << "This is to check from two number which one is greater and by hoe much " << endl ;

int a , b , c ;
cout << "Enter the first number" << endl ;
cin >> a ;
cout << "Enter the second number " << endl ;
cin >> b ;


if (a>b){
    cout << "First number is greater than second " << endl ;
    c = a-b ;
    cout << "the diffrence between them is  : " << c << endl ;


}
if (a<b){
    cout << "Second numnber is grater than first number " << endl ;
    c = b-a ;
    cout << "The diffrence between them is : " << c << endl ;


}
if (a==b){
    cout << "Both the number are equal or same " << endl ;
    cout << " Their is no difrence between them " << endl ;
}



}