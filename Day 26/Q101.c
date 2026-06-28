#include <stdio.h>

int main() {
    int secret = 7, guess;

    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);

    if (guess == secret)
        printf("Congratulations! Correct Guess");
    else
        printf("Wrong Guess. Number was %d", secret);

    return 0;
}