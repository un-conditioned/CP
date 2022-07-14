//Reversing vector using STL function : The time complexity is O(n)

#include<iostream>
#include <vector>
using namespace std;

    void reverseString(vector<char>& s) 
    {
    reverse(s.begin(),s.end());    
    }
