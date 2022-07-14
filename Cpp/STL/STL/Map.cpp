//C++ STL 

#include <iostream>
#include <map>
#include <algorithm>

void PowerofSTL() {

    set<pair<int,int>> S ;
    
    S.insert({2,3});
    S.insert({10,20});
    S.insert({30,400});
    S.insert({401,450});
    
    int point = 401;
    
    auto it = S.upper_bound({point, INT_MAX});
    
    if ( it == S.begin()){
        cout<< " The given point is not lying in any interval. \n";
        return ;
    }  
    
    it --;
    pair<int,int > current = *it;
    
    if(current.first <= point && point <= current.second)
        cout<< "Yes it is present in : ("<< current.first << ","<< current.second << ")"<< endl;
    else 
        cout<< "The given point is not lying in any interval. \n";
    

}
int main(){

map<int,int> A;

    A[1] = 100 ;
    A[2] = -1 ; 
    A[3] = 200;
    A[10000032] = 1;
    
map<char, int> cnt;
    string x = "Manas Gupta";

    for (char c:x ){
        cnt[c]++ ;
    }
    
    cout <<cnt['a']<< " " << cnt['z'] << endl ; 
    
//USing pairs along with set 
    
PowerofSTL();


}