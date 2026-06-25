class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    c++;
                    break;
                }
            }
    }
    if(c>0){return true;}else{
        return false;}
    }
};
