/*******

https://www.geeksforgeeks.org/sort-linked-list-0s-1s-2s-changing-links/

*******/

// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links
Node* segregate(Node *head) {
    
    // Add code here
    if(!head || !(head->next)){
        return head;
    }
    
     Node *zeroD = new Node(0);
     Node *oneD  = new Node(0);
     Node *twoD  = new Node(0);
    
     Node* zero = zeroD, *one = oneD, *two = twoD;
    
    Node* curr = head;
    
    while(curr){
        
        if(curr-> data == 0){
            zero -> next = curr;
            zero = zero -> next;
            curr = curr -> next;
        }else if(curr -> data == 1){
            one -> next = curr;
            one = one -> next;
            curr = curr -> next;
        }else{
            two -> next = curr;
            two = two -> next;
            curr = curr -> next;
        }
    }
    
    zero->next = (oneD -> next ) ? (oneD ->next) : (twoD -> next);
    one -> next = twoD -> next;
    two -> next = NULL;
    
    head = zeroD -> next;
    
    delete zeroD;
    delete oneD;
    delete twoD;
    
    return head;
    
}
