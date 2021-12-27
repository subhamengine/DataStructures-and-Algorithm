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
    ListNode* swapPairs(ListNode* head) {
        // if(!head or !head->next) return head;
        // ListNode* p1 = head;
        // ListNode* p2 = head->next;
        // ListNode* p3 = p2->next;
        // p1->next = p3;
        // p2->next = p1;
        // if(p3!=NULL){
        //     p1->next = swapPairs(p3);
        // }
        // return p2;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* pre = dummy;
        while(pre->next != NULL and pre->next->next!=NULL ){
            ListNode* curr = pre->next;
            ListNode* frwd = curr->next;
            ListNode* temp = frwd->next;
            pre->next = frwd;
            frwd->next = curr;
            curr->next = temp;
            pre = curr;
        }
        return dummy->next;
    }
};
