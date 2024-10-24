//Merge Sort Algorithm: Recursively divide the array in 2, sort it, re-combine it.
//Time Complexity: O(n log n)
#include<iostream>
using namespace std;

void mergeSort(int array[], int n);

int main(){
    int a1[]= {2,4,7,1,5,9,8,6,3};

    mergeSort(a1,9);

    for (int i : a1){
        cout<<i<<" ";
    }
    
    return 0;
}

void mergeSort(int array[], int n){
    
}