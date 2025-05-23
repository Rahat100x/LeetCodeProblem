class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> count;
        for(auto it: nums) {
            count[it]++;
        }
        int result,maxValue = 0;
        for(auto [key,value]: count) {
            if(value > maxValue) {
                maxValue = value ;
                result = key;
            }
        }

        return result;
    }
};