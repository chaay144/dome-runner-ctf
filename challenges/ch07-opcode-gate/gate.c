// challenges/ch07-opcode-gate/gate.c
#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char **argv){
    // XOR key
    const uint8_t k = 0x13;

    // XOR-encoded bytes for "ACCESS_GRANTED_XOR"
    // produced by: each_char ^ 0x13
    uint8_t enc[] = {
        0x52,0x50,0x50,0x56,0x40,0x40,0x4C,0x54,0x41,
        0x52,0x5D,0x47,0x56,0x57,0x4C,0x4B,0x5C,0x41
    };

    // decode
    char pass[sizeof(enc)+1];
    for (size_t i = 0; i < sizeof(enc); i++) pass[i] = (char)(enc[i] ^ k);
    pass[sizeof(enc)] = '\0';

    if (argc > 1 && strcmp(argv[1], pass) == 0) {
        puts("Access granted");
        return 0;
    } else {
        puts("Access denied");
        return 1;
    }
}
