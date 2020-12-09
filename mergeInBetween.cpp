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
        ListNode* head1=list1;
         ListNode* head=list1;
        ListNode* head3=list1;
        ListNode* head2=list2;
        while(head!=NULL&&a>1) {
            a--;
            head=head->next;
        }
        while(head3!=NULL&&b>0) {
            head3=head3->next;
            b--;
        }
        head->next=head2;
        while(head!=NULL&&head->next!=NULL) {
            cout<<head->val<<" ";
            head=head->next;
        }
        head->next=head3->next;
        return head1;
        
    }
};
