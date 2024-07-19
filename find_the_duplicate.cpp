class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int idx = abs(nums[i]);
            if(nums[idx] < 0){
                ans = idx ;
                break;
            }
            else{
                nums[idx]*=-1;
            }
        }
        return ans;
    }
};