/* This is the ListNode class definition

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

void removeLoop(ListNode* head) {
    if (head == NULL) return;

    ListNode* slow = head;
    ListNode* fast = head;

    // Step 1: Detect loop using slow and fast pointers
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) break; // Loop detected
    }

    // If no loop exists
    if (fast == NULL || fast->next == NULL) {
        return;
    }

    // Step 2: Move slow to head
    slow = head;

    // Step 3: Find the node where loop starts
    while (slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    // Step 4: Remove the loop
    fast->next = NULL;
}
