#include<iostream> 
using namespace std;

int multiplyLoop( int a, int b){
    int result=0;
    for (int i = 0; i < b; i++)
    {
        result +=a;
    }
    return result;
}

int multiplyRecursive( int a, int b){
    if (b==0)
    {
        return 0;
    }
    else
        return a+ multiplyRecursive(a,b-1);
}

int main(){
    int a=5;
    int b=3;
    cout<<multiplyRecursive(a,b)<<endl;
    cout<<multiplyLoop(a,b);
    cout<<"hello world";
    return 0;
}


