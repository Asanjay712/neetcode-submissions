class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> left(nums.size(),0);
        left[0]=1;
         for(int i=1;i<nums.size();i++){
            left[i]=nums[i-1]*left[i-1];

         }
         vector<int> right(nums.size(),0);
         int n=nums.size();
right[n-1]=1;
 for(int i=n-2;i>=0;i--){
    right[i]=nums[i+1]*right[i+1];
     
 }




         for(int i=0;i<nums.size();i++){
             nums[i]=left[i]*right[i];
         }
         return nums;

    }
};
