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
    ListNode* swapNodes(ListNode* head, int k) {
        int c = 0 ; 
        ListNode*temp = head;
        while(temp != NULL){
            c++;
            temp= temp->next;
        }
        int j = c - k +1;
        temp  = head;
        ListNode *first , *second;
        int c1 = 1 ;
        while(temp != NULL){
            if(c1 == k){
                first = temp;
            }
            if(c1 == j){
                second = temp;
            }
            c1++;
            temp = temp->next;
        }
        swap(first->val,second->val);
        return head;
    }
};