/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //initalizing the two pointers
        ListNode* fast = head;
        ListNode* slow = head;

        //check conditions
        while(fast != nullptr && fast->next != nullptr){
            //traversing the lists
            slow = slow->next;
            fast = fast->next->next;

            //final check
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};