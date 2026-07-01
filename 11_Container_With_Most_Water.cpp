class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size(),maxAr=0;
        int j=n-1,i=0,ar=0;
        while(i<j){
            if(nums[i]>nums[j]){
                ar=nums[j]*(j-i);
                maxAr=max(ar,maxAr);
                j--;
            }else if(nums[i]<nums[j]){
                ar=nums[i]*(j-i);
                maxAr=max(ar,maxAr);
                i++;
            }else{
                ar=nums[j]*(j-i);
                maxAr=max(ar,maxAr);
                i++;
            }
        }

        return maxAr;
        
    }
};
