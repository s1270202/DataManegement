#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main () {
    int i, num;
    int heads = 0, tails = 0;
    char name[30];

    printf("Who are you?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    srand((unsigned int)time(NULL));

    printf("Tossing a coin...\n");

    for (i = 0; i < N; i++) {
        num = rand() % 2;

        printf("Round %d: ", i+1);

        if (num == 0) {
            printf("Heads\n");
            heads++;
        }
        else if (num == 1) {
            printf("Tails\n");
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    if (heads > tails) printf("%s won!\n", name);
    else printf("%s lost...\n", name);

    return 0;
}
