#include<bits/stdc++.h>
using namespace std;
int main(){
    //* list<int> l; // type 1
    //* list<int> l(10); // type 2. with size
    list<int> l(10, 5); // type 2. with size and also value.
    cout << l.size() << endl;
    // cout << *l.begin() << endl;
    for(auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;

    list<int> l_2 = {9,7,15,20};
    list<int> l_3(l_2); // list l_2 copy in list l_3

    // ! list with array
    int a[] = {10, 20, 30};
    list<int> l_4(a, a+3);

    // ! list with vector
    vector<int> v = {100, 200, 300};
    list<int> l_5(v.begin(), v.end());

    for(int val : l_5)
    {
        cout << val << endl;
    }

    return 0;
}