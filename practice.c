#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to convert binary to hexadecimal
void binaryToHex(char *binary) {
    int length = strlen(binary);
    int decimal = 0;
    
    // Convert binary to decimal
    for (int i = 0; i < length; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    
    // Convert decimal to hexadecimal and print it
    printf("Hexadecimal: %X\n", decimal);
}

int main() {
    char binary[65]; // 64-bit max binary input + null terminator
    
    printf("Enter a binary number: ");
    scanf("%64s", binary);
    
    // Validate binary input
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number.\n");
            return 1;
        }
    }
    
    binaryToHex(binary);
    
    return 0;
}
