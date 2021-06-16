#include "iostream"
using namespace std;

// new Node created
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

///////////////////////////////////////
////// insertion in LINkED LIST ///////
///////////////////////////////////////
void insertAtEnd(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void insertAtStart(Node *&head, int val)
{
    Node *n = new Node(val);

    n->next = head;
    head = n;
}

////////////////////////////////////////
/////// Deletion in LINkED LIST ////////
////////////////////////////////////////

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

//////////////////////////////////////////////
////// display function in LINkED LIST ///////
//////////////////////////////////////////////

void displayLLData(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
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
        temp = temp->next;
    }
    cout << "NOT FOUND :( " << endl;
}
