#include "iostream"
#include "./compineOperationInLL.h"

using namespace std;

/////////////////////////////////
/////// iterative methode ///////
/////////////////////////////////
Node *reverse(Node *&head)
{
    Node *prevPtr = NULL;
    Node *currPtr = head;
    Node *nextptr;

    while (currPtr != NULL)
    {
        nextptr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextptr;
    }
    return prevPtr;
}

/////////////////////////////////
/////// recursive methode ///////
/////////////////////////////////
Node *reverseRecursive(Node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main()
{
    Node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtStart(head, 100);

    displayLLData(head);

    Node *newHead = reverse(head);
    displayLLData(newHead);

    Node *newHead2 = reverseRecursive(newHead);
    displayLLData(newHead2);
}