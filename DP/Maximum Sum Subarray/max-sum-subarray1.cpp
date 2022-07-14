#include <iostream>
#include <vector>

using namespace std;

//0(N), 0(1)
int maxSubArray(vector<int>& nums) {
    
        int n = nums.size();
        long long prevMax = INT_MIN,curMax ;
        long long ans = -INT_MAX;
        for ( int i = 0; i < n; i++){
            curMax = nums[i];
            curMax = max (curMax, prevMax + nums[i]);
            ans = max (ans, curMax);
            prevMax = curMax;
        }
    return ans;
    }

// nums = [-2 , 1, -3, 4, -1, 2, 1, -5, 4]
// prevMax = INT_MIN, -2
//curMax = -2, 1
//ans = -INT_MAX, -2