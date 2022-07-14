//C++ STL 

#include <iostream>
#include <vector>
#include <algorithm>

bool f(int x, int y){
    return x > y ;
}
int main(){
    
    vector<int> A = {11,2,3,14};
    
    cout<< A[1] << endl;
    
    sort(A.begin(),A.end()) ; //O(NlogN) 
    //2,3,11,14
        
    bool present = binary_search(A.begin(),A.end(),3);  //True   
    cout<<present <<endl ;
    present = binary_search(A.begin(),A.end(),100); //False
    cout<<present <<endl ;
    
    A.push_back(100);
     //2,3,11,14,100
    present = binary_search(A.begin(),A.end(),100); //True
    cout<<present <<endl ;
    
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    
    //2,3,11,14,100,100,100,100,100,123
    
    auto it = lower_bound(A.begin(),A.end(),100);
   //  vector<int> ::iterator it = lower_bound(A.begin(),A.end(),100);  // >=
    
    
    vector<int> ::iterator it2 = upper_bound(A.begin(),A.end(),100);// >
    //Upper Bound and lower bound in log n time 
    
    
    cout<< *it << " " <<*it2 <<endl;
    cout<< it2 - it <<endl ; //5
    
    //Sorting in descending order using comparitive function
    
    sort(A.begin(),A.end(),f) ;
    
    //Iterating through a vector
    for (int x:A){
        cout<< x << " " ;
    }
    cout<<endl;
    
    /*
   vector<int>::iterator it3 ; null pointer 
    for (it3 = A.begin();it3 !=A.end(); it3++){
    cout<< *it3 << " " ; 
    }
    */
    
    //Iterating through a vector using reference 
    for (int &x:A){
        cout<< x << " " ;
    }
    cout<<endl;
    
    //Iterating through a vector using reference does not changes the content  
    for (int &x:A){
        x++ ;
        cout<< x << " " ;
    }
    cout<<endl;

}