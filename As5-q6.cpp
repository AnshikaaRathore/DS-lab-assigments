/*
This is the ListNode class definition

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/

ListNode* reverseLinkedListKGroup(ListNode* head, int k) {
    if (head == NULL || k == 1) return head;

    ListNode* current = head;
    int count = 0;

    // Step 1: Check if there are at least k nodes left in the list
    while (current != NULL && count < k) {
        current = current->next;
        count++;
    }

    // If less than k nodes, do not reverse
    if (count < k) return head;

    // Step 2: Reverse k nodes
    current = head;
    ListNode* prev = NULL;
    ListNode* next = NULL;
    count = 0;

    while (count < k && current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // Step 3: Recursively reverse the rest of the list
    head->next = reverseLinkedListKGroup(current, k);

    // prev is the new head of this reversed group
    return prev;
}
