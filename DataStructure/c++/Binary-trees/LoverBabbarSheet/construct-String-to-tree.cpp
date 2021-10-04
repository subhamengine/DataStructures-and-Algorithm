int start = 0;

Node* str2tree(string s){
  if(s == NULL || s.size() == 0) return null;
  return strHelper(s);
}

Node* strHelper(string s){
  if(start >= length) return NULL;
  bool neg = false;
  
  if(s[start] == '-'){
    neg = true;
    start++;
  }
  int num = 0;
  while(start < s.length() and (s[start] != '(' or s[start] != ')')){
    int dig = (int)s[start];
    num = num*10 + dig;
    start++;
  }
  
  if(neg) num = -num;
  Node* root = new Node(num);
  
  if(start >= s.length()){
    return root;
  }
  if(start < s.length() and s[start] =='('){
    start++;
    root->left = strHelper(s);
  }
  if(start < s.length() and s[start] == ')'){
    start++;
    return root;
  }
  if(start < s.length() and s[start] =='('){
    start++;
    root->right = strHelper(s);
  }
  if(start < s.length() and s[start] == ')'){
    start++;
    return root;
  }
  
  return root;
}
