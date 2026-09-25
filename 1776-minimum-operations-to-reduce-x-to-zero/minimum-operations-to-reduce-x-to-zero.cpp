class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = accumulate(nums.begin() , nums.end() , 0);

        int target = total -x;
        if(target == 0  ) return nums.size();
        if(target <0) return -1;
        int left =0;
        int right = 0;
        int k=0;
        long long int sum =0;
        int length = -1;
        for(int i =right; i<nums.size(); i++)
        {
            sum += nums[i];
            k++;
            while(sum > target) {
                sum -= nums[left];
                left++;
                k--;
            }

            if(sum == target){
                length = max(k , length);
            }
        }
        if(length ==-1){
            return -1;
        }
        return nums.size() - length;
    }
};