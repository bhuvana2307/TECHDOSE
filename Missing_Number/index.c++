class Solution {
public: 
     int missingNumber(vector<int>& nums) {
         int sumarr=0;
         for(int i=0;i<=nums.size();i++){
             if(i!=nums.size())
             sumarr^=nums[i];
              sumarr^=i;
         }
         
         
        return  sumarr;
     
     } 
