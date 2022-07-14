//Naive Recursion approach,Top Down without memoisation
//fib(n) = fib(n-1)+ fib(n-2)
//O(2^n)

#include <iostream>
using namespace std;

int fib(int n){
if( n-1 == 0 || n-1 ==1 ){
    return 1;
} 
else 
    return fib(n-1)+ fib(n-2);
}

int main(){
int n ; 
cin>>n;
cout<<fib(n);
}

