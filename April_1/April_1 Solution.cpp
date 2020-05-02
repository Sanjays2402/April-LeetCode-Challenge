class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,num=0;
        for(i=0;i<nums.size();i++)
        {
            num=num^nums[i];
        }
        return num;
    }
};
