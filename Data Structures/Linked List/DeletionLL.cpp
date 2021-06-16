#include "iostream"
#include "./compineOperationInLL.h"

using namespace std;

void deleteAtHead(Node *&head)
{

    Node *toDelete = head;
    head = head->next;
    delete toDelete;
}

void deletionNode(Node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
        delete head;

    Node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
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

    deletionNode(head, 2);
    deleteAtHead(head);

    displayLLData(head);
}