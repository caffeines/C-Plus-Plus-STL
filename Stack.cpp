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

    stack <int> st; ///declaring a stack of integer type
    st.push(10); /// inserting an element on the top of the stack
    st.push(15);
    st.push(20);

    ///Now the stack has three element : 20,15,10;(top -> bottom);
    cout<<"Top: "<<st.top()<<endl; /// this top() function will return the top element from the stack
    st.pop(); /// this pop() function will remove the top element from the stack
    cout<<(st.empty()==1 ? "Empty" : "Not empty")<<endl; /// empty() function will check the stack is empty or not (True/False)
    cout<<"Size: "<<st.size()<<endl; ///size() function will return the size of the stack;

    /* N.B : before calling the pop() or top() you need to check the stack is empty or not,
    cause if the stack is empty and you call the top() or pop() you will get a runtime error (RE) */

    st.pop();
    st.pop();
    if(!st.empty()){
        cout<<st.top()<<endl; /// already three elements have removed, that's it is not printing.
    }

    return 0;
}


