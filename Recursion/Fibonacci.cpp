#include <iostream>
using namespace std;


int fiboRecursive(int n){

    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    
    return fiboRecursive(n-1)+fiboRecursive(n-2);
        
        

}

int fiboLoop(int n){
    int a=0;
    int b=1;
    int result = 0;
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
for (int i = 2; i <= n; i++)
{
    result = a+b;
    a=b;
    b=result;
}

   return result;

}

int main(){

cout<<fiboRecursive(10)<<endl;
cout<<fiboLoop(10);

    
}