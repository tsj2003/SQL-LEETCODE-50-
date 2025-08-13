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

private:
    ListNode* getMid(ListNode* head ) {
        ListNode* slow = head;
       ListNode* fast = head;
        
        while( fast-> next != NULL &&  fast-> next-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    ListNode* reverse(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        
        if(head -> next == NULL) {
            return true;
        }
        ListNode* mid = getMid(head);
         
      
        ListNode* list2 =reverse(mid->next);
        //mid->next = list2;
        ListNode* head2 = list2;

        while(head2 != NULL) {
            if(head2->val != head->val) {
                return 0;
            }
            head = head -> next;
            head2 = head2 -> next;
        }
        return true;


    }
    
};
