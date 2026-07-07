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
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL)
    return;
        ListNode* temp = head ;
        int i = 0 ; 
        for( i = 1 ; temp->next != NULL ; i++){
            temp = temp->next ;
        }
        int num = i % 2 == 0 ? i /2 : i/ 2 +1;
        int j = 1;
        temp = head ;
        while(j < num){
            temp = temp->next;
            j++;
        }
        ListNode*Nitin = temp->next ;
        temp->next = NULL;
        Nitin= reverse(Nitin);
        temp = head;
        while(temp != NULL && Nitin != NULL ){
            ListNode* prev = temp->next;
            ListNode* prev2 = Nitin->next;
            temp->next = Nitin;
            Nitin->next = prev;
            temp = prev;
            Nitin = prev2;
        }
        // return head ;
    }
};