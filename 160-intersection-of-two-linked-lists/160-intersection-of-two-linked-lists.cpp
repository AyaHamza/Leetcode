
class Solution {
public:
    map<ListNode*,int>mp;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA!=NULL)
               mp[headA]++,headA=headA->next;
        while(headB!=NULL){
            if(mp.find(headB)!=mp.end())
                return headB;
                headB=headB->next;
        }
        return NULL;


    }
};