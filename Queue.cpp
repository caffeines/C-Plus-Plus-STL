#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines

    queue <int> q; ///declaring a queue of integer type

    q.push(1);
    q.push(2);
    q.push(3);

    ///Now the queue has three element : 1,2,3;(front -> rear);
    cout<<"Front: "<<q.front()<<endl; /// this front() function will return the front element from the queue
    cout<<"Back: "<<q.back()<<endl; /// this back() function will return the rear element from the queue

    q.pop(); /// this pop() function will remove the front element from the queue
    cout<<(q.empty()==1 ? "Empty" : "Not empty")<<endl; /// empty() function will check the queue is empty or not (True/False)
    cout<<"Size: "<<q.size()<<endl; ///size() function will return the size of the queue;

    return 0;
}


