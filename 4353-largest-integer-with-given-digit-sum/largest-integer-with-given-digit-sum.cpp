class Solution {
public:
    int largestInteger(int n, int s) {
      long long  maxn = pow(10,n)-1;

      for(int i = maxn; i>=0; i--)
      {
        int temp =i;
        long long int sum =0;
        while(temp>0)
        {
             sum += temp%10;
             temp /=10;
        }
        if(sum == s){
           return i;
        }
      }

        return -1;
    }
};