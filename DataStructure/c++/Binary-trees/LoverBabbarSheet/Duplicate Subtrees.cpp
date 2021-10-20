unordered_map<string , pair<Node* , int>>m;
string solve(Node* root ){
   if(!root)
   return "$";
    
   if(!root->left && !root->right){
       string s= "";
       s = s + to_string(root->data);
       
       m[s] = {root ,m[s].second +1 };

       return s;
   }
  string s= "";
  s = s + to_string(root->data);
  s = s +"*" + solve(root->left);
  s = s +"*"+ solve(root->right);
  
m[s] = {root ,m[s].second +1 };
 
  return s;
   
   
}
vector<Node*> printAllDups(Node* root)
{
   if(!root)
   return {NULL};
   vector<Node*> v;
   solve(root ) ;
   for(auto it : m){
       if(it.second.second > 1)
       v.push_back(it.second.first);
   }
   
   return v;
}
