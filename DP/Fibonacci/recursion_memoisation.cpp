// Recursion with Memoisation 
// TOP DOWN fib(n) = fib(n-1)+ fib(n-2)
// O(2n+1) x O(1) =  O(n)

#include<iostream>
#include<vector>
using namespace std;

int fib(int n){
    int result = -1;
    int memo[n+1];
    if ( memo[n]!= 0 )
        return memo[n];
    if( n == 1 || n == 2)
        result = 1;
    else
        result = fib(n-1)+fib(n-2);
    memo[n]= result;
    return result;
}
int main(){
    int n;
    cin >> n;
    cout<< fib(n);
}