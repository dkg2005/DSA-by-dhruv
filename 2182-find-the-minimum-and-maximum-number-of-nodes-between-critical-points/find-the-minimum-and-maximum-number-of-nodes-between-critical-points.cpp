/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> criticalPoints;

        ListNode* prev = head;
        ListNode* curr = prev->next;
        if(curr == NULL) return {-1, -1};
        ListNode* next = curr->next;
        if(next == NULL) return {-1, -1};
        int cnt = 1;

        while(next){
            int l = prev->val;
            int m = curr->val;
            int r = next->val;
            if(l > m  && m < r) criticalPoints.push_back(cnt);
            else if(m > l && m > r) criticalPoints.push_back(cnt);
            prev = curr;
            curr = next;
            next = next->next;
            cnt++;
        }
        // for(auto x :criticalPoints) cout << x << " ";
        // sort(criticalPoints.begin(), criticalPoints.end());
        int n = criticalPoints.size();
        if( n < 2) return {-1, -1};
        int maxDist = criticalPoints[n-1] - criticalPoints[0];
        int minDist = INT_MAX;
        for(int i=1; i<n; i++){
            minDist = min(minDist, criticalPoints[i]-criticalPoints[i-1]);
        }
        return {minDist, maxDist};
    }
};