class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int  i=0;i<n;i++){
            int maxl = nums[0];
            for(int j=0;j<=i;j++){
                maxl = max(maxl,nums[j]);
            }
            int minr = nums[i];
            for(int j = i;j<n;j++){
                minr = min(minr,nums[j]);
                
            }
        int inst = maxl - minr;
            if(inst <= k){
                return i;
            }
        }
        return -1;
    }
};