#include <iostream>

using namespace std;


int main()
{
    string s;

    cin >> s;


    int count_lower = 0;
    int count_upper = 0;

    for (int i = 0; i < s.length(); i++){
        if (s[i] >=97 && s[i]<=122)
            count_lower+=1;
        else if(s[i] >=65 && s[i]<=90)
            count_upper+=1;
    }

    string result = "";

    if ((count_lower == count_upper) || (count_lower > count_upper)){
        for (int i = 0; i < s.length(); i++){
            result+= ((char)tolower(s[i]));
        }
    }
    else{
        for (int i = 0; i < s.length(); i++){
            result+= ((char)toupper(s[i]));
        }
    }

    cout << result << endl;
    
    return 0;
}
