#include "iostream"

using namespace std;

class DNode
{
public:
    int data;
    DNode *next;
    DNode *prev;

    DNode()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
    DNode(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
    DNode(int val, DNode *nextAdd)
    {

        data = val;
        next = nextAdd;
        prev = NULL;
    }
    DNode(DNode *preAdd, int val)
    {
        data = val;
        next = NULL;
        prev = preAdd;
    }
    DNode(DNode *preAdd, int val, DNode *nextAdd)
    {
        data = val;
        next = nextAdd;
        prev = preAdd;
    }
};

/////////////////////////////////////////////
////// insertion in DoublyLINkED LIST ///////
/////////////////////////////////////////////

void insertAtTail(DNode *&head, int val)
{
    DNode *newDNode = new DNode(val);
    // cout << newDNode->data;

    if (head == NULL)
    {
        head = newDNode;
        return;
    }
    DNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newDNode;
    newDNode->prev = temp;
    // cout << newDNode->data;
}

void insertAtHead(DNode *&head, int val)
{
    DNode *temp = head;
    DNode *newDNode = new DNode(val);
    head = newDNode;
    newDNode->next = temp;
    if (temp != NULL)
    {
        temp->prev = newDNode;
    }
}

////////////////////////////////////////////
////// Deletion in DoublyLINkED LIST ///////
////////////////////////////////////////////
void deletionFromHead(DNode *&head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        delete head;
        return;
    }
    DNode *temp = head;
    head = head->next;
    head->prev = NULL;

    delete temp;
}
void delectionFromTail(DNode *&head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        delete head;
        return;
    }
    DNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

////////////////////////////////////////////////////
////// Display function of DoublyLINkED LIST ///////
////////////////////////////////////////////////////

void DisplayDList(DNode *head, string message = "")
{
    DNode *temp = head;
    DNode *last;
    cout << endl;
    if (message != "")
    {
        cout << message << endl;
    }
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            last = temp;
        }
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    while (last != NULL)
    {
        cout << last->data << " <- ";
        last = last->prev;
    }
    cout << "NULL" << endl;

    cout << "________________________________" << endl;
}

////////////////////////////////////////////
////// Serching in DoublyLINkED LIST ///////
////////////////////////////////////////////
void serching(DNode *&head, int val)
{
    DNode *temp = head;
    while (temp != NULL && temp->data != val)
    {
        temp = temp->next;
    }
    temp != NULL && temp->data == val ? cout << "value found " : cout << "value not fount";
}

int main()
{
    DNode *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtHead(head, 0);

    DisplayDList(head, "after insertion");

    deletionFromHead(head);
    DisplayDList(head, "after deletion");

    serching(head, 0);
}