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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr = head;
        map<int, int> freq;
        ListNode* newhead = NULL;
        ListNode* end = newhead;

        while(ptr != NULL){
            freq[ptr->val] += 1;
            ptr = ptr->next;
        }

        for(auto& pair: freq){
            ListNode* newptr = new ListNode(pair.first);
            if(newhead == NULL){
                newhead = newptr;
                end = newptr;
            }
            else{
                end->next = newptr;
                end = end->next;
            }
        }

        head = newhead;
        return head;
    }
};