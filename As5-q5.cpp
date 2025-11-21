#include <iostream>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int data) {
        this->data = data;
        this->next = NULL;
    }
};

ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
    // Step 1: Calculate lengths
    int lenA = 0, lenB = 0;
    ListNode *a = headA, *b = headB;

    while (a != NULL) {
        lenA++;
        a = a->next;
    }
    while (b != NULL) {
        lenB++;
        b = b->next;
    }

    // Step 2: Move longer list ahead by difference
    a = headA;
    b = headB;
    int diff = abs(lenA - lenB);

    if (lenA > lenB) {
        while (diff--) a = a->next;
    } else {
        while (diff--) b = b->next;
    }

    // Step 3: Move both pointers together
    while (a != NULL && b != NULL) {
        if (a == b) return a;  // Intersection point found
        a = a->next;
        b = b->next;
    }

    return NULL; // No intersection
}

int main() {
    // Example usage can be added here if needed
