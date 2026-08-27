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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head ;
        ListNode* temp2 = head;
        int c = 0, k = 0;
        int sum = 0;
        while(temp != NULL){
            if(temp->val == 0 ){
                c++;
            }
            if(c<2){
                sum +=temp->val;
            }
            else if(c == 2){
                temp2->val = sum ;
                sum = 0;
                temp2 = temp2->next;
                c=1;
                k++;
            }

            temp = temp->next;
        }
        temp2 = head;
        for(int i = 0 ; i < k-1 ; i++){
            temp2 = temp2->next;
        }
        temp2->next = NULL;
        return head;
    }
};