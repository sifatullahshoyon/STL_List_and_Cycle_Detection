#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {100, 200, 300};
    list<int> l_1(v.begin(), v.end());

    // l_1.clear();
    cout << l_1.size() << endl;

    if(l_1.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    l_1.resize(2);

    for(int val : l_1)
    {
        cout << val << endl;
    }

    return 0;
}