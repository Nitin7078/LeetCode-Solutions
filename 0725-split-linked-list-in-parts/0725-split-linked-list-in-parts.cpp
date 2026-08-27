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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode * temp = head ;
        int c = 0 ;
        while(temp != NULL){
            c++;
            temp = temp->next;
        }

        int size = c / k ;
        int rem = c%k;
        vector<int>ans(k,size);
        int j = 0;
        while(rem != 0){
            ans[j]++;
            j++;
            rem--;
        }
        temp = head;
        vector<ListNode*>asns;
        ListNode * temp2 = head;
        for(int i = 0 ; i < ans.size() ; i++){
            if(ans[i] == 0){
                asns.push_back(NULL);
                continue;
            }
            for(int j = 0 ; j < ans[i] -1 ; j++){
                temp = temp->next;
            }
            asns.push_back(temp2);
            temp2 = temp->next;
            temp->next = NULL;
            temp = temp2;

        }
        return asns ;

    }
};