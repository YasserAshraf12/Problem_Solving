#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    
    // 1. Set has no duplicates
    // 2. Sorted (BST)
    // 3. Traversal in Ascending Order by Default by can be reversed
    // 4. Accessing a key is O(logN)
    // 5. Add/Remove O(logN)
    // 6. Find O(logN)

    set<int> s;

    s.insert(0);
    s.insert(5);
    s.insert(-1);
    s.insert(2);
    s.insert(100);

    set<int>::iterator it;

    for(it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    cout << endl;

    set<int>::reverse_iterator rit;
    for(rit = s.rbegin(); rit != s.rend(); rit++)
        cout << *rit << " ";
    
    s.erase(0);


    if(s.find(0) != s.end())
        cout << "Found" << endl;

    cout << endl;
    
    /*******************************************************************************************************************/

    return 0;

}