#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n < 1 || n > 1000)
        return -1;

    bool a,b,c;
    int problems_count = 0;

    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if ((a&b) || (a&c) || (b&c)) problems_count++;
    }
    cout << problems_count << endl;
    return 0;
}