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
    bool isPalindrome(ListNode* head) {
       vector<int> ans;
         vector<int> ans2;
       ListNode* temp=head;
       while(temp!=NULL){
        ans.push_back(temp->val);
        temp=temp->next;
       }
       int i=0;
       int j=ans.size()-1;
       while(i<j){
        if(ans[i]==ans[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
       }
       return true;



    //    temp=head;
    //    ListNode* prev=NULL;
    //    ListNode* next=NULL;
    //    while(temp!=NULL){
    //     next=temp->next;
    //     temp->next=prev;
    //     prev=temp;
    //     temp=next;
    //    }
    //   while(prev!=NULL){
    //       ans2.push_back(temp->val);
    //     prev=prev->next;
    //    }
    //    if(ans==ans2){
    //     return true;
    //    }
    //   return false;

    }
};