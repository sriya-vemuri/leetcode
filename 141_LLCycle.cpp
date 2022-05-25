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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> tab;
        //if(head->next==NULL || head==NULL) return false;
        while(head!=NULL){
            if(tab.find(head)!=tab.end()){
                return true;
            }
            tab.insert(head);
            head=head->next;
        }
        return false;
    }
};
