/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp;
    temp = head;
    int counter = 1;
    int mid = 1;
    while(temp->next != NULL){
        counter++;
        temp = temp->next;
    }
    int middleval = (counter/2);
    struct ListNode *ptr;
    ptr = head;
    while(mid <= middleval){
        ptr = ptr->next;
        mid++;
    }
    return ptr;
}