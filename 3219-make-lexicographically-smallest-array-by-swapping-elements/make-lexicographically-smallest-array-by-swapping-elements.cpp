class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<int>vec = nums;
        sort(vec.begin(),vec.end());

        int gpNum = 0;
        unordered_map<int,int>numToGroup;
        numToGroup[vec[0]] = gpNum;

        unordered_map<int,list<int>>gpList;
        gpList[gpNum].push_back(vec[0]);

        for(int i=1; i<n; i++){
            if(abs(vec[i] - vec[i-1]) > limit){
                gpNum += 1;
            }
            numToGroup[vec[i]] = gpNum;
            gpList[gpNum].push_back(vec[i]);
        }
        vector<int>res(n);
        for(int i=0; i<n; i++){
            int num = nums[i];
            int gp = numToGroup[num];

            res[i] = *gpList[gp].begin();
            gpList[gp].pop_front();
        }
        return res;
    }
};