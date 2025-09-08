// challenges/ch08-branch-mispredict/validator.c
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        puts("Access denied");
        return 1;
    }

    // Website expects this exact key:
    const char *target = "ACCESS_OVERRIDE_CBD";

    // Forces a conditional jump in the compiled code:
    if (strcmp(argv[1], target) != 0) {
        puts("Access denied");
        return 1;
    }

    puts("Access granted");
    printf("Shutdown key: %s\n", target);
    return 0;
}
