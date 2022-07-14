//Iteration or Bottom Up appraoch 
//0(n)

#include<iostream>
#include<vector>
using namespace std;

int fib_iteration(int n){
    int arr[n + 1] ;
    arr[1]=arr[2]=1;
    if(n==1 || n==2)
        return 1 ;
    else
        for(int i = 3 ; i<=n;i++){
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    return arr[n];
    
}
int main(){
    int n;
    cin >> n;
    cout<< fib_iteration(n);
}