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
        
        if(head == NULL){
            return nullptr;
        }
        
        ListNode* front = head->next;
        ListNode* prev = head;
        ListNode* ptr = head;

        //severing the connection
        ptr->next = NULL;

        while(front != NULL){
            //moving the ptr to the location
            ptr = front;
            front = front->next;

            //adding the link change to the prev node
            ptr->next = prev;
            prev = ptr;
        }
        
        head = ptr;
        return head;
    }
};