/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    // Write your code here
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    Node* t = temp->next;
    temp->next = nullptr;
    delete t;
    return head;
}
