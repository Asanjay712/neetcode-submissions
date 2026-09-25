class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

       
        unordered_set<int> mp(nums.begin(),nums.end());

int maxlength=0;
int length=1;
       // for(int i=0;i<nums.size();i++){
            for(int value:mp){
           //  int value=nums[i];

             if(!mp.count(value-1)){
 length=1;

             while(mp.count(value+1)){//if exists 
             length++;
             maxlength=max(maxlength,length);
             value=value+1;

             }
            
maxlength=max(maxlength,length);

        }
        }


       return maxlength; 
    }
};
