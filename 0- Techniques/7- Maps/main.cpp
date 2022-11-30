#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // Nick Description -> Set of Pairs
    // 1. Sorted (BSTs).
    // 2. No Duplicates
    // 3. Traversal in Ascending Order by Default by can be reversed
    // 4. Accessing a key is O(logN)
    // 5. Add/Remove O(logN)
    // 6. Find O(logN)

    map<char, int> occ;

    occ.insert({'A', 1});
    occ.insert({'C', 3});
    occ.insert({'B', 4});
    occ.insert({'D', 2});
    occ.insert({'A', 5});

    map<char, int>::iterator it;

    for(it = occ.begin(); it != occ.end(); it++)
    {
        pair<char, int> p = *it;

        cout << p.first << " -> " << p.second << endl;
    }
    cout << endl;

    map<char, int>::reverse_iterator rit;

    for(rit = occ.rbegin(); rit != occ.rend(); rit++)
    {
        pair<char, int> p = *rit;

        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}