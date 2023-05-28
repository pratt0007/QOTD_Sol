

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.

Node* reverse(Node *head)
{
    Node *next = NULL;
    Node *prev = NULL;
    Node *curr = head;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

int getNthFromLast(Node *head, int n)
{
    head = reverse(head);
    Node *temp = head;
    int count = 1;
    
    while(temp != NULL && count < n){
        temp = temp->next;
        count++;
    }
    
    if(temp) return temp->data;
    else return -1;
}
