#include "iostream"

// insertion at start and end of the LL
// linear serching

using namespace std;

class Node
{
public:
    int data;
    Node *Next;

    Node(int val)
    {
        data = val;
        Next = NULL;
    }
};

void insertAtEnd(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }

    temp->Next = n;
}

void insertAtStart(Node *&head, int val)
{
    Node *n = new Node(val);

    n->Next = head;
    head = n;
}

void displayLLData(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->Next;
    }
    cout << "NULL" << endl;
}

void search(Node *&head, int val)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            cout << "FOUND " << endl;
            cout << "data " << temp->data << endl;
            return;
        }
        temp = temp->Next;
    }
    cout << "NOT FOUND :( " << endl;
}

int main()
{

    Node *head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    insertAtStart(head, 100);

    search(head, 50);

    displayLLData(head);
}