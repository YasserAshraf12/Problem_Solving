#include <iostream>

using namespace std;


int main()
{
    int n;

    cin >> n;

    int count_Danik = 0;
    int count_Anton = 0;

    if(n < 1 || n > 100000)
        return -1;
    
    string outcome;
    cin >> outcome;


    for(int i = 0; i< outcome.length(); i++)
    {
        if(outcome[i]=='A'){
            count_Anton+=1;
        }
        else{
            count_Danik+=1;
        }
    }

    if (count_Anton > count_Danik) cout << "Anton" << endl;
    else if (count_Danik > count_Anton) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}