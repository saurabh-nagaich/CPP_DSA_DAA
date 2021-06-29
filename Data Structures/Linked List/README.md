#### DOUBLY LINKED LIST

Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous as well as the next node. Therefore, in a doubly linked list, a node consists of three parts: node data, pointer to the next node AND pointer to the previous node

DoublylinkList.cpp
consist 4 parts
0. NODE CREATER 
1. INSERTION SECTION
2. DELETION SECTION
3. DISPLAY SECTION
4. SERCHING SECTION

## 0.NODE CREATER
```
    ##  DOUBLY LINKED LIST PATTERN
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

```


## 1.INSERTION SECTION
you can insert the value from head and from tail
form Head you can use insertAtHead(DNode *&head, int val) function
and for tail you can use insertAtTail(DNode *&head, int val) function

## 2.DELETION SECTION
you can delet the value from head and from tail
form Head you can use deletionFromHead(DNode *&head) function
and for tail you can use delectionFromTail(DNode *&head) function

## 3.DISPLAY SECTION
you can use  DisplayDList(DNode *head, string message = "") this function
for display the value of each node
this function take the two parameter 
1. head pointer
2. message
you can pass the message this massage will be show on the top of your output like
```
    insertAtTail(head, 50);
    insertAtHead(head, 0);

    DisplayDList(head, "after insertion");

    deletionFromHead(head);
    
    DisplayDList(head, "after deletion"); 
```
# output
```
    after insertion
    0 -> 10 -> 20 -> 30 -> 40 -> 50 -> NULL
    50 <- 40 <- 30 <- 20 <- 10 <- 0 <- NULL
    ________________________________

    after deletion
    10 -> 20 -> 30 -> 40 -> 50 -> NULL
    50 <- 40 <- 30 <- 20 <- 10 <- NULL
    ________________________________
```

## 4.Searching SECTION
you can use serching(head, 0) this function to confirm tha value is present 
in the list or not
