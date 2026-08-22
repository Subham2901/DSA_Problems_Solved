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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==NULL || k==0)
        {
            return head;
        }
        ListNode* temp=head;
        int len=1;
        while(temp->next!=nullptr)
        {
            len++;
            temp=temp->next;
        }
        ListNode* temp1=head;
        temp->next=head;
        k=k%len;
        len=len-k;
        for(int i=1;i<len;i++)
        {
            temp1=temp1->next;
        }
        head=temp1->next;
        temp1->next=nullptr;
        return head;

    }
};