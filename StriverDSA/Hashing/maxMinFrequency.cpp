#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int> arr = {10, 5, 10, 15, 10, 5};

    unordered_map<int, int> freq ;

    //Store Frequency
    for(int num:arr){
        freq[num]++ ;
    }

    int maxFreq = INT_MIN ;
    int minFreq = INT_MAX ;

    int maxEle = -1 ;
    int minEle = -1 ;

    // Find highest and lowest frequency 
    for (auto it : freq){

        if(it.second > maxFreq){
            maxFreq = it.second ;
            maxEle = it.first ;
        }
        if( it.second < minFreq ){
            minFreq = it.second ;
            minEle = it.first ;
        }


    }

    cout << "Highest Frequency Element " << maxEle << endl ;
    cout << "Lowest Frequency Element " << minEle << endl ;
    

    return 0;
}