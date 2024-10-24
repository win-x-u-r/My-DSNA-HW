#include<iostream>
using namespace std;
//Bubble Sort Algorithm: Compares pairs of adjacent elements, and swaps them if not in order.
//Time Complexity: O(n^2)

void bubbleSort(int array[], int n);

int main(){
    int a1[]= {2,4,7,1,5,9,8,6,3};

    bubbleSort(a1,9);

    for (int i : a1){
        cout<<i<<" ";
    }
    
    return 0;
}

void bubbleSort(int array[], int n){
    for(int i=0; i<n-1;i++){
        for (int j = 0; j < n-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
}