#include<bits/stdc++.h>
using namespace std ;

void selectionSort(int arr[], int n  ){
    for (int i = 0 ; i < n-1 ; i++ ){

        int mini = i ;
        for (int j = i + 1 ; j < n ; j++ ){
            if ( arr[j] < arr[mini]){
                mini = j ;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp ;

    }
}

int main(){
    int n ;
    cout << "Enter number of Elements in Array :" ;
    cin >> n ;

    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cout << "Enter "<< i << " th indexed element :" ;
        cin >> arr[i];

    }
    selectionSort(arr,n);



    for (int i = 0 ; i < n ; i++){
        cout << arr[i]<< "  ";
    }


    return 0 ;
}