#include <stdio.h>
#include <stdlib.h>

/* Extra comment */
int euclid(int x, int y);

int main(int argc, char *argv[]) {
        printf("Hello world!\n");
        int x=45, y=78;

        if (argc != 3) {
                fprintf(stderr, "Expecting 2 args\n");
                printf("Enter x: ");
                scanf("%d", &x);
                printf("Enter y: ");
                scanf("%d", &y);
        } else {
                x = atoi(argv[1]);
                y = atoi(argv[2]);
        }

        int r = euclid(x, y);
        printf("gcd of %d and %d is %d\n", x, y, r);
} // End main()
