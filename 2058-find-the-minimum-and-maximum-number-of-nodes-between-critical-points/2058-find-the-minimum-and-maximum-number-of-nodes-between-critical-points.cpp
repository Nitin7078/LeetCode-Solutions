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
        vector<int>nums;
        while(head != NULL){
            nums.push_back(head->val);
            head = head->next;
        }
        vector<int>index;
        for(int i = 1; i < nums.size()-1 ;i++){
            if(nums[i-1] < nums[i] && nums[i] > nums[i+1]){
                index.push_back(i);
            }
            else if(nums[i-1] > nums[i] && nums[i] < nums[i+1]){
                index.push_back(i);
            }
        }
        if(index.size() < 2 ){
            return {-1,-1};
        }
        int min = INT_MAX ,max;
        max = index[index.size() -1] - index[0];

        for(int i = 0; i < index.size()-1 ; i++){
            if(min > (  index[i+1] - index[i] ) ){
                min = index[i+1] - index[i];
            }
        }
        return {min, max};
    }
};