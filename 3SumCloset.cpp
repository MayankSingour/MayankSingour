class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n =nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0;
        int mi = INT_MAX;
        int ans;
        for(int i = 0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            sum = nums[i];
            int s = i+1;
            int e= n-1;
            while(s<e){
                sum += nums[s]+nums[e];
                if(abs(sum-target)<mi){
                    mi = abs(sum-target);
                    ans= sum;
                }
                if(sum>target){
                    e--;
                }else if(sum<target){
                    s++;
                }else{
                    return target;
                }
                sum= nums[i];
            }
        }
        return ans;
        
    }
};
