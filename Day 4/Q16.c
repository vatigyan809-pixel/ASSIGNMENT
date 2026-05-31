#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, original, remainder;
    int result, digits;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers are:\n");

    for(num = start; num <= end; num++) {

        original = num;
        digits = 0;
        result = 0;

        while(original != 0) {
            original /= 10;
            digits++;
        }

        original = num;

        while(original != 0) {
            remainder = original % 10;
            result += pow(remainder, digits);
            original /= 10;
        }

        if(result == num)
            printf("%d ", num);
    }

    return 0;
}