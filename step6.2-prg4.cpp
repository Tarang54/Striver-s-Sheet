/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    // Write your code here   
    Node* temp = head;
    temp->prev = temp->next;
    temp->next = nullptr;
    Node* t = temp;
    temp = temp->prev;
    while(temp!=NULL){
        temp->prev = temp->next;
        temp->next = t;
        t = t->prev;
        temp = temp->prev;
    }
    return t;
}

