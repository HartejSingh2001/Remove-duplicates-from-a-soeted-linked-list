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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode *temp=head,*q;
        
        while( temp->next!=NULL &&temp!=NULL)
        {
            if(temp->val==temp->next->val)
            {
                q=temp->next->next;
                if(q==NULL)
                {
                    temp->next=NULL;
                    break;
                }
                temp->next=q;
            }
            if(temp->val!=temp->next->val)// This condition is very important
            {
               temp=temp->next; 
            }   
        }
        return head;
        
    }
};
