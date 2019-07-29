/********

https://www.geeksforgeeks.org/merge-sort-for-linked-list/

**********/

/*This is a function problem.You only need to complete the function given below*/
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/
/* Function to mergesort the linked list
   It should return head of the modified list  */
   
void FrontBackSplit(Node* head,Node** front,Node** back){
    
    Node* fast = head->next;
    Node* slow = head;
    
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
    }
    *front = head;
    *back = slow->next;
     slow->next = NULL;
}   

Node* sortedMerge(Node* a,Node* b){
    Node* result = NULL;
    
    if(a == NULL){
        return (b);
    }else if(b == NULL){
        return (a);
    }
    
    if(a->data <= b->data){
        result = a;
        result->next = sortedMerge(a->next,b);
    }else{
        result = b;
        result->next = sortedMerge(a,b->next);
    }
    
    return (result);
}

void MergeSortWrapper(Node** head){
    Node* node = *head;
    Node* a;
    Node* b;
    // your code here
    if(node ==NULL || node->next == NULL){
        return;
    }
    
    FrontBackSplit(node,&a,&b);
    
    MergeSortWrapper(&a);
    MergeSortWrapper(&b);
    
    *head = sortedMerge(a,b);
    
}

Node* mergeSort(Node* head) {
    
    MergeSortWrapper(&head);
    
    return head;
    
}
