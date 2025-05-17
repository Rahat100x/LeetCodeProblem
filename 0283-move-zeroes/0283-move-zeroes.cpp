class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        for(auto it : nums) {
            if(it == 0) cnt++;
        }
        vector<int> ans;
        for(auto it : nums) {
            if(it != 0) ans.push_back(it);
        }

        while(cnt--) ans.push_back(0);

        for(int i = 0; i < nums.size(); i++) {
            nums[i] = ans[i];
        }
    }
};