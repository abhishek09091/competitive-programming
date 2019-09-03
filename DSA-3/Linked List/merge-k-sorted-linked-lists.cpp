/*********

https://www.geeksforgeeks.org/merge-k-sorted-linked-lists/
https://www.geeksforgeeks.org/merge-k-sorted-linked-lists-set-2-using-min-heap/

https://www.youtube.com/watch?v=ptYUCjfNhJY



Similar Question in array instead of Linked List:

https://www.geeksforgeeks.org/merge-k-sorted-arrays/
https://www.geeksforgeeks.org/merge-k-sorted-arrays/
https://www.geeksforgeeks.org/merge-k-sorted-arrays-set-2-different-sized-arrays/
https://www.geeksforgeeks.org/merge-k-sorted-arrays-of-different-sizes-divide-and-conquer-approach/

*********/
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;
// A Linked List node
struct Node
{
	int data;
	Node* next;
};
Node* mergeKLists(Node* arr[], int N);
/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}
// Utility function to create a new node.
Node *newNode(int data)
{
	struct Node *temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;
           int x;
           cin>>x;
           arr[j]=newNode(x);
           Node *curr = arr[j];
           n--;
           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = newNode(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Node *res = mergeKLists(arr,N);
		printList(res);
   }
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
/*Linked list Node structure
struct Node
{
    int data;
    Node* next;
};*/ 
/* arr[] is an array of pointers to heads of linked lists
  and N is size of arr[]  */
struct compare{
    
    bool operator()(struct Node* a,struct Node* b){
        return a->data > b->data;
    }
};

Node * mergeKLists(Node *arr[], int N){
       // Your code here
       struct Node* head = NULL, *last;
       
       priority_queue<Node*, vector<Node*>,compare> pq;
       
       for(int i=0; i<N; i++){
           if(arr[i] != NULL){
               pq.push(arr[i]);
           }
       }
       
       while(!pq.empty()){
           
           struct Node* top = pq.top();
           pq.pop();
           
           if(top->next != NULL){
               pq.push(top->next);
           }
           
           if(head == NULL){
               head = top;
               last = top;
           }else{
               last->next = top;
               last = top;
           }
       }
       
       return head;
}
