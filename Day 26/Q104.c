#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("Q2. 5 + 5 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("Your Score = %d/2", score);

    return 0;
}