/********

https://www.geeksforgeeks.org/merge-two-sorted-linked-lists/

*********/


/*This is a function problem.You only need to complete the function given below*/
 
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
// Function to merge the two sorted linked lists
// head1, head2: head of the two sorted linked lists
Node* sortedMerge(Node* head1,   Node* head2){
    // Your Code Here
    
    Node *head = NULL;
    Node *tail = NULL;
    
    if(head1->data < head2->data){
        head = head1;
        tail = head1;
        head1 = head1->next;
    }else{
        head = head2;
        tail = head2;
        head2 = head2->next;
    }
    
    while(head1 && head2){
        
        if(head1->data < head2->data){
            tail->next = head1;
            tail = head1;
            //cout<<" "<<tail->data<<" "<<endl;
            head1 = head1 -> next;
            tail->next = NULL;
        }else{
            tail->next = head2;
            tail = head2;
            head2 = head2 -> next;
            tail->next = NULL;
        }
    }
    
    if(head1){
        tail->next = head1;
        tail = head1;
    }else{
        tail->next = head2;
        tail = head2;
    }
    return head;
}
