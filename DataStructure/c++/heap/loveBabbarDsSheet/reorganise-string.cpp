class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        int count[26] = {0};
        for(auto ch:s){
            count[ch-'a']++;
        }
        auto compare=[](pair<int,char>&left , pair<int,char>&right){
            return left.first==right.first ? right.second < left.second : right.first > left.first;
        };
        priority_queue<pair<int,char>,vector<pair<int,char>> , decltype(compare)>pq(compare);
        for(int i = 0 ; i < 26 ; i++){
            if(count[i]>0){
                
                if(count[i]>(n+1)/2){
                    return "";
                }
                pq.push({count[i],(char)(i+'a')});
            }
        }
        string toReturn = "";
        while(pq.size()>=2){
            pair<int,char> pair1 = pq.top();
            pq.pop();
            pair<int,char> pair2 = pq.top();
            pq.pop();
            
            
            toReturn+=pair1.second;
            toReturn+=pair2.second;
            
            
            if(--pair1.first > 0){
                pq.push(pair1);
            }
            if(--pair2.first > 0){
                pq.push(pair2);
            }
        }
        if(pq.size()>0){
            toReturn+=pq.top().second;
            pq.pop();
        }
        return toReturn;
    }
};
