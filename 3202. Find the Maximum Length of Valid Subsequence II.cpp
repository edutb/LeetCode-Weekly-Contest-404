class Solution {
public:

    int maximumLength(vector<int>& nums, int k) {
          
          int n = nums.size();
          int ans = 0;
          int memo[k];

          for(int i = 0; i < k; i++){
             memset(memo, 0, sizeof memo);
             for(int j = 0; j < n; j++){
                int cur = nums[j]%k;
                int find = (k + (i-cur))%k;
                memo[cur] = memo[find] + 1;
                ans = max(ans, memo[cur]);
             }
          }


          return ans;
    }
};