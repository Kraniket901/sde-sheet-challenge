/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
    if(head1->data > head2->data) swap(head1, head2);
    Node *res = head1;
    while(head1 && head2){
        Node *temp = NULL;
        while(head1 && head1->data <= head2->data){
            temp = head1;
            head1=head1->next;
        }
        temp->next = head2;
        swap(head1, head2);
    }
    return res;
}