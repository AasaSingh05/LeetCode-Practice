//TIME COMPLEXITY: O()
//SPACE COMPLEXITY: O()
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
        //base case of having a empty or single node list
        if( head == NULL || head->next == NULL ){
            return head;        
        }


        //declaration and initialization
        ListNode* slow = head;
        ListNode* fast = head;

        //here we traverse the list
        while( fast != nullptr && fast->next != nullptr ){
            //we first move the slow pointer forward by one
            slow = slow->next;

            //then we move the fast pointer
            fast = fast->next->next;
        }

        //returing the location of the middle pointer
        return slow;
    }
};

