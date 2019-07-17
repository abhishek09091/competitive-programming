/*****

https://www.geeksforgeeks.org/reversing-first-k-elements-queue/

*****/


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
queue<ll> modifyQueue(queue<ll> q, int k){
    //add code here.
    stack<ll> s;
    int n = q.size();
    for(int i=0; i<k; i++){
        s.push(q.front());
        q.pop();
    }
    
    for(int i=0; i<k; i++){
        q.push(s.top());
        s.pop();
    }
    
    for(int i=0; i<n-k; i++){
        q.push(q.front());
        q.pop();
    }
    
    return q;
}