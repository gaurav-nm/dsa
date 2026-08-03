#include<bits/stdc++.h>
using namespace std ;

void bubbleSort( int arr[],int n){

    for (int i = 0 ; i < n-1 ; i++){
        for ( int j = 0 ; j < n-i-1 ; j++){

            if (arr[j] > arr[j+1] ){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
}

int main(){
    cout << "Enter number of elements in Array :";
    int n ;
    cin >> n ;

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cout << "Enter " << i << " index Number :" ;
        cin >> arr[i];
    }

    bubbleSort(arr, n );

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

    return 0 ;
}