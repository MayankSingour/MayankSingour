 vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            int l = i+1, r = nums.size()-1;
            while(l<r){
                if(nums[l]+nums[r]+nums[i]>0)
                    r--;
                else if(nums[l]+nums[r]+nums[i]<0)
                    l++;
                else{
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    ans.push_back(temp);
                    l++;
                    while(nums[l] == nums[l-1] && l<r)
                        l++;
                }
            }
        }
        return ans;
    }
