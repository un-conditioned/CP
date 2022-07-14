// Using recursion

#include<iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s, int i = 0)
{
	if(i >= (s.size()/2))
	{
		return ;
	}
	swap(s[i], s[s.size() - 1 - i]);
	reverseString(s, i + 1);
}