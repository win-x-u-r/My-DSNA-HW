#include<iostream>
using namespace std;

int factorialRecursive(int n){
    if(n==0 or n==1){
        return 1;
    }
return n*factorialRecursive(n-1);

}

int factorialLoop(int n){
    if(n==0 or n==1){
        return 1;
    }
    int result=1;
    for (int i = 2; i <=n; i++)
    {
        result*=i;
    }
      return result;
}

int main(){
    cout<<factorialRecursive(3)<<endl;
    cout<<factorialLoop(3);
    
}