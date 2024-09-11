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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0 , carry = 0;
        ListNode * head = new ListNode(-1);
        ListNode * temp = head;
        while(l1 != NULL || l2 != NULL){
            sum = carry;
            if(l1 != NULL){
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum = sum + l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        } 
        if(carry){
            temp->next = new ListNode(carry);
            temp = temp->next;
        }
        temp = head;
        head = head->next;
        delete temp;
        return head;
    }
};