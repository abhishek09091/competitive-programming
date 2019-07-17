/*This is a function problem.You only need to complete the function given below*/
//function Template for C++
queue<long long int> rev(queue<long long int> q){
    // add code here.
    
    int size = q.size();
    stack<int> s;
    for(int i=0; i<size; i++){
        s.push(q.front());
        q.pop();
    }
    
    for(int i=0; i<size; i++){
        q.push(s.top());
        s.pop();
    }
    return q;
    
}