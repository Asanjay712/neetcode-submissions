class Solution {
public:
    bool isAnagram(string s, string t) {
if(s.size()!=t.size()){
     return false;
}
        map<char,int> mp1;
           map<char,int> mp2;
         for(int i=0;i<s.size();i++){
             mp1[s[i]]++;
         }
          for(int i=0;i<t.size();i++){
             mp2[t[i]]++;
         }
         
         for(auto& it: mp1){
             char c=it.first;
             int freq=it.second;

             if(mp2.find(c)!=mp2.end()&&mp2[c]==freq){
continue;
             }else{
                return false;
             }


         }
         return true;


    }
};
