
#include<bits/stdc++.h>
using namespace std;

// Prints all subarrays in arr[0..n-1]
int subArray(int arr[], int n)
{
    int result = -INT_MAX;
    int sum =0;

    
  // Pick starting point
  for (int i=0; i<n; i++)
  {
      
    // Pick ending point
    for (int j=i; j<n; j++)
    {
    
        
      // Print subarray between current starting
      // and ending points
      for (int k=i; k<=j; k++){
        sum = sum + arr[k];
        cout << arr[k] << " ";
      }
    
    result = max (sum,result);
    sum =0;

      cout << endl;
    }
  }
    cout<< "Maximum Sum : ";
  return result; 
}

int main()
{
  int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << "All Non-empty Subarrays\n";
  cout << subArray(arr, n);
  return 0;
}
