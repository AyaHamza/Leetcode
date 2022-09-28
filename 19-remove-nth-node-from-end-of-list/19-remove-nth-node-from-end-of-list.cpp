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
    int GetAns(ListNode* head, int n) 
    {
        if(head==nullptr)
            return 0;
        int x=GetAns(head->next,n)+1;
        if(x==n+1&&head->next->next!=nullptr)
            head->next=head->next->next;
        else if(x==n+1&&head->next->next==nullptr)
            head->next=nullptr;
        return x;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int y=GetAns(head,n);
        if(y==n)head=head->next;
        return head;
    }
};