#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    for(i = 0; i < 256; i++) {
        if(count[i] > max) {
            max = count[i];
            ch = i;
        }
    }

    printf("Maximum occurring character: %c", ch);
    return 0;
}