/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
void insertAtTail(Node *&head, Node *&tail, int val){
    Node *temp=new Node(val);
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    int carry = 0;
        Node *ansHead=NULL;

    Node *ansTail=NULL;
    while(num1 != NULL || num2 != NULL || carry){
        int sum = 0;
        if(num1 != NULL){
            sum += num1->data;
            num1=num1->next;
        }
        if(num2 != NULL){
            sum += num2->data;
            num2=num2->next;
        }
        sum += carry;
        carry = sum/10;
        insertAtTail(ansHead, ansTail, sum%10);
    }
    return ansHead;
}

//short
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(); 
        ListNode *temp = dummy; 
        int carry = 0;
        while( (l1 != NULL || l2 != NULL) || carry) {
            int sum = 0; 
            if(l1 != NULL) {
                sum += l1->val; 
                l1 = l1 -> next; 
            }
            
            if(l2 != NULL) {
                sum += l2 -> val; 
                l2 = l2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            ListNode *node = new ListNode(sum % 10); 
            temp -> next = node; 
            temp = temp -> next; 
        }
        return dummy -> next;
    }
};