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
    int GetLength(ListNode* node){
        if(node==nullptr)
            return 0;
        return GetLength(node->next)+1;
    }
    void Update(ListNode* node , int c){
        if(c==1)
        {
            node->next=node->next->next;
            return ;
        }
        Update(node->next,c-1);
    }
    ListNode* deleteMiddle(ListNode* head) {
        int x=GetLength(head);
        if(x>1)
        Update(head,x/2);
        else head=nullptr;
        return head;
        
    }
};