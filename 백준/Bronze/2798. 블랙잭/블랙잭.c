#include <stdio.h>

int main()

{
    
    int N, M;
    scanf("%d %d", &N, &M);
    int ary[100];

    for (int i = 0; i < N; i++) {
        scanf("%d", &ary[i]);
    }

    int sum;
   
    int z = 0;
    for (int i = N - 1; i >= 2; i--) {
        for (int j = i - 1; j >= 1; j--) {
            for (int k = j - 1; k >= 0; k--) {
                sum = ary[i] + ary[j] + ary[k];
                if (sum <= M && sum > z) z = sum;
            }          
        }       
    }
    printf("%d", z);
    


    return 0;
}