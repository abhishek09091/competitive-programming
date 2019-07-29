/*********

https://www.geeksforgeeks.org/add-two-numbers-represented-by-linked-lists/

**********/

/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
// write a function returns the resultant linked list
void addBack(Node* &head, Node* &last,int data){
    
    Node *newNode = new Node(data);
    
    if(last == NULL){
        head = newNode;
    }else{
        last->next = newNode;
    }
    last = newNode;
}

Node* addTwoLists(Node* first, Node* second) {
    // Code here
    Node *head1 = first;
    Node *head2 = second;
    Node *head3;
    Node *last = NULL;
    int total, carry = 0;
    
    while(head1 || head2){
        
        int a = (head1) ? (head1->data) : 0;
        int b = (head2) ? (head2->data) : 0;
        
        total = (carry + a + b);
        carry = total/10;
        total = total%10;
        
        addBack(head3,last,total);
        
        if(head1){
            head1 = head1->next;
        }
        
        if(head2){
            head2 = head2->next;
        }
        
    }
    
    if(carry != 0){
        addBack(head3,last,carry);
    }
    
    return head3;
}