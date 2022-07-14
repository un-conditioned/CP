 
 // Using swapping using third variable

#include<iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
        int l=0,r=s.size()-1;
        while(l<r)
        {
            int t=s[l];
            s[l]=s[r];
            s[r]=t;
            l++;
            r--;
        }
    }
    void reverseString2(vector<char>& s) {
        int l=0, r=s.size()-1;
        while(l<=r){
            swap(s[l++], s[r--]);
        }
        
    }