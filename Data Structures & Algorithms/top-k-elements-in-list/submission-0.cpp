class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
vector<int> ans;
        priority_queue<pair<int,int>> q;
        unordered_map<int,int> mp;
         for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
         }
         for(auto&it:mp){
             int freq=it.second;
              int value=it.first;
              q.push({freq,value});
         }

         while(!q.empty()&&k!=0){
            pair<int,int> p=q.top();
             q.pop();
              int value=p.second;
              ans.push_back(value);
              k--;
         }
         return ans;
        
    }
};
