/******

https://www.geeksforgeeks.org/lru-cache-implementation/

*****/
#include<bits/stdc++.h>
using namespace std;
class LRUCache
{
public:
    LRUCache(int );
 
    int get(int );
 
    void set(int , int );
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    LRUCache *l  = new LRUCache(n);
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        string a;
        cin>>a;
        if(a=="SET")
        {
            int aa,bb;
            cin>>aa>>bb;
            l->set(aa,bb);
        }else if(a=="GET")
        {
            int aa;
            cin>>aa;
            cout<<l->get(aa)<<" ";
        }
    }
    cout<<endl;
    }
}

/*This is a function problem.You only need to complete the function given below*/
/*The structure of the class is as follows 
class LRUCache
{
public:
    LRUCache(int );
    int get(int );
    void set(int , int );
};*/
/*You are required to complete below methods */
/*Inititalize an LRU cache with size N */
int maxSize;
list<pair<int,int>> dq;
unordered_map<int, list<pair<int,int>> :: iterator> ma;

LRUCache::LRUCache(int N){
     //Your code here
     maxSize = N;
     dq.clear();
     ma.clear();
     
}
/*Sets the key x with value y in the LRU cache */
void LRUCache::set(int x, int y) {
     //Your code here
     if(ma.find(x) == ma.end()){
         
         if(ma.size() == maxSize){
             
             int first = dq.back().first;
             int second = dq.back().second;
             dq.pop_back();
             dq.push_front({x,y});
             ma.erase(first);
             ma[x] = dq.begin();
        }else{
             dq.push_front({x,y});
             ma[x] = dq.begin();
         }
     }else{
        auto it = ma.find(x);
        dq.erase(it->second);
        dq.push_front({x,y});
   
        ma[x]=dq.begin();
     }
}
/*Returns the value of the key x if 
present else returns -1 */
int LRUCache::get(int x){
    //Your code here
    if(ma.find(x) == ma.end()){
        return -1;
    }
    
    auto it = ma.find(x);
    int d = (*(it->second)).second;
    dq.erase(it->second);
    dq.push_front({x,d});
    ma[x] = dq.begin();
    return d;
}