#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sumO = 0;
    int sumE = 0;

    for (int i = 0; i < N; i++)
    {
        int V;
        scanf("%d", &V);

        if (V % 2 == 0)
        {
            sumE += V;
        }
        else if (V % 2 == 1)
        {
            sumO += V;
        }
    }

    printf("%d %d", sumE, sumO);
    return 0;
}