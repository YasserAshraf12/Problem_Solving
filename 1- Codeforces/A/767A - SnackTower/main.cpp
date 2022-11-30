#include <stdio.h>

bool snack[100009];

int main()
{
    int N;  scanf("%d", &N);

    int largest = N;

    for(int i = 1; i <= N; i++)
    {
        int size;
        scanf("%d", &size);

        snack[size] = 1;

        while(snack[largest])
        {
            printf("%d ", largest--);
        }

        printf("\n");
    }

    return 0;
}