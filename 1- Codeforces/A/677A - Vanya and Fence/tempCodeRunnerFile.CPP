#include <iostream>

using namespace std;

void main(){

    int n,h, a_h;
    cin >> n >> h;

    if(n < 1 || n > 1000)
        return;
    if(n < 1 || n > 1000)
        return;

    int total_width = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a_h;
        if (a_h > h)
            total_width+=2;
        else{
            total_width+=1;
        }
    }
    cout << "Minimum Possible Valid width: " << total_width << endl;
}