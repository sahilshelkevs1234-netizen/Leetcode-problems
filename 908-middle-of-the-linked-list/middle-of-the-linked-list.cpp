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
    ListNode* middleNode(ListNode* head) {
    ListNode* str=head;
    int count =1;

    while(str->next!=NULL){
     count++;
    str=str->next;
    }
    
    int mid =count/2;
    ListNode* cot=head;

    if(count%2==0){
        while(mid!=0){
            mid--;
          cot= cot->next;
          
        }
       
    }
    else if(count%2!=0){
       while(mid!=0){
        mid--;
        cot=cot->next;
       
       }
    }
return cot;
    }
};