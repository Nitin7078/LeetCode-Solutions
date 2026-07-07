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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1 ,*prev = NULL;
        int i = 0 ;
        while(i != a){
            prev = temp ;
            temp = temp->next;
            i++;
        }
        //prev is the first one which have to be linked ;
        while(i != b){
            temp = temp->next;
            i++;
        }
        temp = temp->next;
        // temp is now the second one to be linked ;
        ListNode*temp2 = list2 ;
        while(temp2->next != NULL){
            temp2=temp2->next ;
        }
        prev->next = list2;
        temp2->next = temp;
        return list1;
    }
};