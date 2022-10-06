class Solution {
    private:
    void solve(vector<int>nums,vector<vector<int>>& ans,int index){

        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
         unordered_set<int> st;
        for(int j=index; j<nums.size(); j++){
            if(st.find(nums[j])!=st.end()) continue;
            st.insert(nums[j]);
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            //Backtrack
            swap(nums[index],nums[j]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;

        int index= 0;
        solve(nums,ans,index);
        return ans;
    }
};
