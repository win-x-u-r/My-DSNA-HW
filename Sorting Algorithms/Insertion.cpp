// Insertion Algorithm: after comparing elements to the left, shift elements to the right to make room to insert a value
//Time Complexity: O(n^2)

#include<iostream>
using namespace std;

void insertionSort(int array[], int n);

int main(){
    int a1[]= {2,4,7,1,5,9,8,6,3};
    insertionSort(a1,9);
    for (int i : a1){
        cout<<i<<" ";
    }
    return 0;
}

void insertionSort(int array[], int n){
    for (int i = 1; i < n; i++){
        int temp = array[i];
        int j = i-1;
        while (j>=0 && array[j] > temp){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
}
