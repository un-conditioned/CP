#include <iostream>
#include <vector>

using namespace std;

//0(N), 0(N)
 int maxSubArray(vector<int>& nums) {
    
        int n = nums.size();
        vector<long long> dp(n + 1,0);
        long long ans = -INT_MAX;
        for ( int i = 0; i < n; i++){
            dp[i+1] = nums[i];
            dp[i+1] = max ( dp[i+1], dp[i] + nums[i]);
            ans = max (ans, dp[i+1 ]);
        }
    return ans;
    }

// nums = [-2 , 1, -3, 4, -1, 2, 1, -5, 4]
// dp =   [ 0 ,-2 , 1, -2, 4,  3, 5, 6, 1, 5]    


int maxSubArray(vector<int> &nums) {
    
       int n = nums.size();
        vector<long long> dp(n ,0);
        dp[0]=nums[0];
        long long ans = dp[0];
        for ( int i = 1; i < n; i++){
            dp[i] = max ( (long long)nums[i], dp[i-1] + nums[i]);
            ans = max (ans, dp[i]);
        }
    return ans;
    }

// nums = [-2 , 1, -3, 4, -1, 2, 1, -5, 4]
// dp =   [-2 , 1, -2, 4,  3, 5, 6, 1, 5]    