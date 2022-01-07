class Solution {
public:
    string shortstring(string s , int l , int r ){
        string ans;
        for(int i = l ; i <= r ; i++) ans.push_back(s[i]);
        return ans;
    }
    vector<int> diffWaysToCompute(string s) {
        
        vector<int>ans;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '+' or s[i] == '-' or s[i] == '*'){
                string ls = shortstring(s,0,i-1);
                string rs = shortstring(s,i+1,s.size());
                vector<int>left = diffWaysToCompute(ls);
                vector<int>right = diffWaysToCompute(rs);
                for(auto it:left){
                    for(auto it2:right){
                        if(s[i] == '+'){
                            ans.push_back(it+it2);
                        }
                        else if(s[i] == '-'){
                            ans.push_back(it-it2);
                        }
                        else if(s[i] == '*'){
                            ans.push_back(it*it2);
                        }
                    }
                }
                
            }
        }
        if(ans.size() == 0){
            ans.push_back(atoi(s.c_str()));
        }
        return ans;
    }
};
