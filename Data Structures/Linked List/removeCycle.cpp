#include "iostream"
#include "./compineOperationInLL.h"

using namespace std;

void makeCycle(Node *head, int n)
{
    int count = 0;
    Node *temp = head;
    Node *startCycle;
    while (temp->next != NULL)
    {
        count++;
        if (count == n)
        {
            startCycle = temp;
        }
        temp = temp->next;
    }
    if (n == count + 1)
    {
        startCycle = temp;
    }
    temp->next = startCycle;
}

void removeCycle(Node *head)
{
    Node *temp = head;
    Node *slow = head, *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}

int main()
{
    Node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 100);
    insertAtEnd(head, 2);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 100);

    displayLLData(head);

    makeCycle(head, 5);
    // displayLLData(head);

    removeCycle(head);

    displayLLData(head);
}