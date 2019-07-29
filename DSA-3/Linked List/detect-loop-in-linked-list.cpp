/**********

https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

**********/

/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
*/
int detectloop(Node *head) {
    
    // your code here
    Node* slow_ptr = head;
    Node* fast_ptr = head;
    
    while(slow_ptr && fast_ptr && fast_ptr->next){
        
        slow_ptr = slow_ptr -> next;
        fast_ptr = fast_ptr -> next -> next;
        
        if(slow_ptr == fast_ptr){
            return 1;
        }
    }
    
    return 0;
}
