class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        // int left = 0,right = nums.size()-1;
        // while(left <= right) {
        //     int mid = left + (right-left) / 2;
        //     if(nums[mid] == target) return mid;
        //     else if(nums[mid] < target) left = mid+1;
        //     else right = mid-1;
        // }
        // return left;
    }
};