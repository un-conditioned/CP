//C++ STL 

#include <iostream>
#include <vector>
#include <algorithm>

int main(){

set<int> S ; 

S.insert(2);
S.insert(4);
S.insert(6);
S.insert(8);
S.insert(10);

//Set is automatically sorted, printing it using for loop   
for (int x: S)
cout<< x<< " ";

auto it = S.find(10);
if (it == S.end())
    cout<<"\nNot Present\n";
else {
    cout<<"\n"<< *it << " is Present" <<endl ;
}

auto it2 = S.lower_bound(-1);
auto it3 = S.upper_bound(6); //>
auto it4 = S.lower_bound(6); //=>
auto it5 = S.upper_bound(9); //>

cout<< *it2 <<" "<< *it3 <<" " << *it4  << " "<< *it5; 
    
S.erase(10);
    
it5 = S.upper_bound(9); //>
    
if (it5 == S.end())
    cout<< "\nNot Found "<< *it5;

}
