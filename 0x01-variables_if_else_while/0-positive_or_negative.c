# include <stdlib.h>
# include <time.h>
# include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n < 0) {
        printf("%d is negative\n", n);
    } else {
        printf("0 is neither positive nor negative\n");
    }
    return 0;
}


