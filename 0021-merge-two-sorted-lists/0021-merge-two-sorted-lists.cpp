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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) { 
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode* ans = NULL;
        int f = 0;
        while(p || q)
        { 
             if(p && q)
             {
                 if(p->val <= q->val){
                     if(f == 0) {ans = p; f = 1;}
                     while(p->next && p->next->val <= q->val) p = p->next;
                     ListNode* t = p->next;
                     p->next = q;
                     p = t;
                 }else{
                     if(f == 0) {ans = q; f = 1;}
                     while(q->next && q->next->val <= p->val) q = q->next;
                     ListNode* t = q->next;
                     q->next = p;
                     q = t;
                 }
                 
             }else{
                 if(p && f == 0) return p;
                 if(q && f == 0) return q;
                 return ans;
             }
        }
        return ans;
    }
};


