class Solution {
public:
    int countOverlap(int rowOff, int colOff, vector<vector<int>>&a, vector<vector<int>>&b){
        int n = a.size();
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int row = rowOff + i;
                int col = colOff + j;
                if((row >= 0 && row <= n-1) && (col >= 0 && col <= n-1)){
                    if(a[i][j] == 1 && 1 == b[row][col]) cnt++;
                }
            }
        }
        return cnt;
    }
    int largestOverlap(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n = a.size();

        int maxOverlap = 0;

        for(int rowOff=-n+1; rowOff<n; rowOff++){
            for(int colOff=-n+1; colOff<n; colOff++){
                int cnt = countOverlap(rowOff, colOff, a, b);
                maxOverlap = max(maxOverlap, cnt);
            }
        }
        return maxOverlap;
    }   
};