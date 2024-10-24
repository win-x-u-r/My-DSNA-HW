
//Selection Sort Algorithm: start at first index, search for the index of a smaller value and cache the index. once done, swap first and min.
//Time Complexity: O(n^2)


#include<iostream>
using namespace std;

void selectionSort(int array[], int n);

int main(){
    int a1[]= {2,4,7,1,5,9,8,6,3};
    selectionSortort(a1,9);
    for (int i : a1){
        cout<<i<<" ";
    }
    return 0;
}

void selectionSortort(int array[], int n){
    int temp;
    int min;
    for (int i = 0; i < n-1; i++){
        min = i;
        for (int j = i+1; j < n; j++){
            if (array[j]<array[min]){
                min = j;
            }
        }
        temp = array[i];
        array[i]=array[min];
        array[min]=temp; 
        
    
    }

}