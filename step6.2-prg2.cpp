/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {
    // Write your code here
    if(head == NULL){
        return (new Node(k));
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* n = new Node(k,nullptr,temp);
    temp->next = n;
    return head;
}
