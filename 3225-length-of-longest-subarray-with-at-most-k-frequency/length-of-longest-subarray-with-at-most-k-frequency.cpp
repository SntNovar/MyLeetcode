class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
         int left =0;
         int count =0;
        unordered_map<int , int> mpp;
         for(int i =0; i<nums.size(); i++)
         {
            mpp[nums[i]]++;

            while(mpp[nums[i]]>k)
            {
                mpp[nums[left]]--;
                left++;
            }
          count =  max(count , i-left+1);
         } 
        return count;
    }
};