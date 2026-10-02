class Solution {
public:
    void fxn(string&curr, vector<string>&ans, int open, int close, int n){
        if(curr.size() == 2*n){
            // if(checkParth(curr)) 
            ans.push_back(curr);
            return ;
        }
          if(open<n){
            curr.push_back('(');
            fxn(curr, ans, open+1, close, n);
            curr.pop_back();
          }

       if(close < open){
            curr.push_back(')');
            fxn(curr, ans, open, close+1, n);
            curr.pop_back();
       }
    }
    
    vector<string> generateParenthesis(int n) {
       vector<string>ans;
       string curr = "" ;
       fxn(curr, ans, 0, 0, n);
       return ans;
    }
};