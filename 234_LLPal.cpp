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
    bool isPalindrome(ListNode* head) {
//         stack<int> s;
        
//         if(head==NULL||head->next==NULL) return true;
//          //slow=slow->next;
//         ListNode *slow=head,*fast=head;
//         while(fast&&fast->next){
            
//             fast=fast->next->next;
//             s.push(slow->val);
//             slow=slow->next;
//             //cout<<fast->val;
//         }
//        // cout<<slow->val;
//         // if(slow->next!=NULL){
//         //  slow=slow->next;
//           s.push(slow->val);
//         // for(stack<int> dump = s; !dump.empty(); dump.pop()){
//         // cout << dump.top() << ' ';
//         // }
//         int flag=0;
//         // ListNode *start=head;
//         // int i=0;
//         // while(i<s.size()){
//         //     if(s.top()==start->val){
//         //         flag=1;
//         //     }
//         //     else{
//         //         flag=0;
//         //         break;
//         //     }
//         //     start=start->next;
//         //     i++;
//         // }
        
//         // slow=slow->next;
//         // cout<<slow->val;
//         while(slow!=NULL){
//             if(s.top()!=slow->val){
//                 flag=0;
//                 break;
//             }
//             else{
//                 flag=1;
//                cout<<slow->val;
//                 slow=slow->next;
//                 s.pop();
//             }
//         }
//             if(flag==1){return true;}
//             else{return false;}
        int n=0;
        ListNode *t1=head,*t2=head,*t3=head;
        for(ListNode *t=head;t!=NULL;t=t->next){
            n++;
        }
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=t1->val;
            t1=t1->next;
        }
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[n-1-i])
            return false;
        }
        return true;
    }
};
