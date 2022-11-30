#include <bits/stdc++.h>

using namespace std;

int solution(int, int, int);

int main()
{
    cout <<  solution(3, 999111321, 7);
    return 0;
}

int solution(int X, int Y, int D){
    if((X < 1 || X > 1000000000) || (Y < 1 || Y > 1000000000) || (D < 1 || D > 1000000000))
        exit(0);
    if(X > Y)
        exit(0);
    return ((int)ceil((double)(Y-X)/(double)D));
}