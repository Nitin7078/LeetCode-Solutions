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
ListNode* reverse(ListNode * head){
    ListNode *io = head , *prev = NULL;
    while(io != NULL){
        ListNode*next = io->next;
        io->next = prev;
        prev= io ;
        io = next;
    }
    return prev;
}
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode* temp = head->next , *prev = head ;
        while(temp != NULL){
            if(prev->val > temp->val){
                prev->next = temp->next;
                temp = temp->next ;
            }
            else{
                prev = temp ;
                temp = temp->next ;
            }
        }
        head = reverse(head);
        return head ;
    }
};