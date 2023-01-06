class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int min=INT_MAX;
        int p=0;
        for(int i=0;i<nums.size();i++){

            if(min>nums[i]){

            min=nums[i];
            }
            if(p<nums[i]-min){
                p=nums[i]-min;
                
            }
            
        }
        return p;
    }
};