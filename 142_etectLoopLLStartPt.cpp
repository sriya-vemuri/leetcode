/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *t=NULL;
        unordered_set<ListNode*> tab;
        int i=0;
        while(head){
            if(tab.find(head)!=tab.end()){
                t=head;
                return t;
            }
            tab.insert(head);
            head=head->next;
        }
        return t;
    }
};
