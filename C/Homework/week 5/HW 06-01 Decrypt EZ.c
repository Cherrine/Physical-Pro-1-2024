#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    scanf("%199[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Shift uppercase character backward by 3 positions
            str[i] = str[i] - 3;
            // Wrap around if necessary
            if (str[i] < 'A') {
                str[i] = str[i] + 26;
            }
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            // Shift lowercase character backward by 3 positions
            str[i] = str[i] - 3;
            // Wrap around if necessary
            if (str[i] < 'a') {
                str[i] = str[i] + 26;
            }
        }
        // Non-alphabetic characters remain unchanged
    }

    printf("Shifted String: %s\n", str);

    return 0;
}
