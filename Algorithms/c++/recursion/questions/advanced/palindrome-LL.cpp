class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* pre = NULL;
        ListNode* nex = NULL;
        while(head!=NULL){
            nex = head->next;
            head->next = pre;
            pre = head;
            head = nex;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        if(!head or !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
        while(slow!=NULL){
            if(head->val != slow->val) return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};
