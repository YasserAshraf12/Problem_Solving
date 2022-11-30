#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    if(((s1.length() < 1) || (s1.length() > 100)) || ((s2.length() < 1) || (s2.length() > 100)) || s1.length() != s2.length())
        exit(0);
    
    int count_s1 = 0;
    int count_s2 = 0;

    for (int i = 0; i < s1.length(); i++){
        if(tolower(s1[i]) != tolower(s2[i]))
        {
            if (tolower(s1[i]) < tolower(s2[i])){
                count_s1+= 1;
            }
            else if(tolower(s1[i]) > tolower(s2[i])){
                count_s2+= 1;
            }
            break;
        }
    }
    if((count_s1 == 0) && (count_s2 == 0))
        cout << 0 << endl;
    else if(count_s1 > 0)
        cout << -1 << endl;
    else cout << 1 << endl;

    return 0;
}