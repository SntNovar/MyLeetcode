class Solution {
public:
    int hIndex(vector<int>& citations) {
        int max = *max_element(citations.begin() , citations.end());
        int n = citations.size();
        vector<int> count(n+1 ,0 );
        for(int x : citations) 
        {
            if(x>=n) {
                count[n]++;
            }
            else count[x]++;
        }
        int cit= 0;
        int k=0;
        for(int i =n; i>=0; i--)
        {
          cit +=count[i];
          if(cit>=i) {
            return i;
          }
        }
        return 0;
    }  
};