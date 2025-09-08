```c
// challenges/ch09-final-relay/relay.c
#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char **argv) {
    // The program reconstructs the expected string from this array.
    // Rule: expected[i] = arr[i] - (i * 3)
    // (So each number is offset by its index * 3.)
    uint8_t arr[] = {
        70, 76, 84, 74, 88, 110, 100, 90, 100,
        92, 119, 128, 121, 117, 118, 124, 115, 126
    };

    char expected[sizeof(arr) + 1];
    for (size_t i = 0; i < sizeof(arr); i++) {
        expected[i] = (char)(arr[i] - (int)(i * 3));
    }
    expected[sizeof(arr)] = '\0';

    if (argc < 2) {
        puts("Access denied");
        return 1;
    }

    if (strcmp(argv[1], expected) == 0) {
        puts("Access granted");
        printf("Shutdown code: %s\n", expected);
        return 0;
    } else {
        puts("Access denied");
        return 1;
    }
}
