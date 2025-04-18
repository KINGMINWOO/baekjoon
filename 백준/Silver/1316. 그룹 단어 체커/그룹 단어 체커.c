#include <stdio.h>
#include <string.h>

int main()

{
    int N;
    scanf("%d", &N);
    int count = 0;
    int flag = 0;
    
    for (int i = 0; i < N; i++) {
        char ary[101];
        scanf("%s", ary);
        int M = strlen(ary);

        //printf("M = %d\n", M);
        flag = 0;
        for (int j = 0; j < M - 1; j++) { // 왼쪽 값 하나씩 옆으로
            if (flag == 3) break;
            flag = 0;
            for (int k = j + 1; k < M; k++) { // 왼쪽 값이랑 같은지 비교
                if (flag == 3) break;
                if (ary[k] == ary[j]) {
                    if (flag == 0 || flag == 1) { 
                        flag = 1; 
                    }
                    if (flag == 2) {
                        flag = 3;
                        count += 1;
                    }
                }
                if (ary[k]!=ary[j]) {
                    flag = 2;
                }
                //printf("flag = %d\n", flag);
            }
            
        }
        
    }
    //printf("count = %d\n", count);
    printf("%d\n", N - count);

    return 0;
}