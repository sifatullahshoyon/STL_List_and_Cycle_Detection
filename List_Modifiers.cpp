#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {1,2,3,4,5};
    list<int> l_2;
    // type : 1;
    // l_2 = l; // copy l in l_2
    l_2.assign(l.begin(),l.end()); // type : 2

    // cout << *next(l.begin(), 1)  << endl;

    // insert at any position
    l.insert(next(l.begin(), 2) , 100);

    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}