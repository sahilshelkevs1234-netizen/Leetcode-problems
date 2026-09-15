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
    ListNode* reverseList(ListNode* head) {
         ListNode* pre = NULL;
         ListNode* curt=head;
         ListNode* net=NULL;
         while(curt !=NULL){
           net=curt->next;
            curt->next = pre;
           pre=curt;
           curt=net;
         }
         return pre;
    }
};