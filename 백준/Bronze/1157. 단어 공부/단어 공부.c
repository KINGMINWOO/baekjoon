#include <stdio.h>

int main()

{
    
    char ary[1000001];
    int alphabet[26] = { 0 };
    
    scanf("%s", ary);

    for (int i = 0; i < 26; i++) {
        int count = 0;
        for (int j = 0; ary[j] != NULL; j++) {
            if (ary[j] == (65 + i) || ary[j] == (97 + i)) {
                count += 1;
                alphabet[i] = count;
            }
        }
    }
    int alphabet1[26];
    for (int i = 0; i < 26; i++) {
        alphabet1[i] = alphabet[i];
    }
    // for (int i = 0; i < 26; i++) {
    //     printf("%3d", alphabet1[i]);
    // }
    // printf("\n");
    for (int i = 0; i < 25 ; i++) {
        int max1 = 0;
        int max_index = 0;
        for (int j = 0; j < 26 - i; j++) {
            if (alphabet[j] > max1) {
                max1 = alphabet[j];
                max_index = j;
            }
        }
        int temp;
        temp = alphabet[max_index];
        alphabet[max_index] = alphabet[26 - (i + 1)];
        alphabet[26 - (i + 1)] = temp;
    }
    
    // for (int i = 0; i < 26; i++) {
    //     printf("%3d", alphabet[i]);
    // }
    // printf("\n");
    if (alphabet[25] == alphabet[24]) {
        printf("?");
    }
    else {
        int flag;
        int max = 0;
        for (int i = 0; i < 26; i++) {
            if (alphabet1[i] > max) {
                max = alphabet1[i];
                flag = i;
            }
        }
        printf("%c", 'A' + flag);
    }

    /*for (int i = 0; i < 26; i++) {
        printf("%3d", alphabet[i]);
    }*/

    return 0;
}