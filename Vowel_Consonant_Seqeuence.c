#include<stdio.h>
#include<string.h>

#define MAX_LEN 100

int is_vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1;
    }
    return 0;
}

void generate_vowelconsonant_sequence(char *str) {
    int len = strlen(str);
    int i, j;
    char temp[MAX_LEN];
    int flag = 0;
    for (i = 0, j = 0; i < len; i++) {
        if (is_vowel(str[i])) {
            if (flag != 1) {
                temp[j++] = 'V';
                flag = 1;
            }
        } else {
            if (flag != 2) {
                temp[j++] = 'C';
                flag = 2;
            }
        }
    }
    temp[j] = NULL;
    strcpy(str, temp);
}

int main() {
    char str[MAX_LEN];
    
    scanf("%s", str);
    generate_vowelconsonant_sequence(str);
    printf("%s
", str);
    return 0;
}
