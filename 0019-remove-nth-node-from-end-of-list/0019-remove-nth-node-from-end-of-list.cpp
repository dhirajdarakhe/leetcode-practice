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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* p = head;
       int length = 0;
       while(p){
           length++;
            p=p->next;
       }
       length -= n;
       p = NULL;
       ListNode* q = head;
       if(length == 0) return head->next;
       while(length--){
           p = q;
           q = q->next;
       }
       p->next = q->next;
       return head;
    }
};