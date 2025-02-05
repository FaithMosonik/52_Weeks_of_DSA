#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_valid_bracket_sequence(const char *s) {
    int min_open = 0;  // Minimum possible open brackets
    int max_open = 0;  // Maximum possible open brackets

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            min_open++;
            max_open++;
        } else if (s[i] == ')') {
            min_open = (min_open > 0) ? min_open - 1 : 0; // Ensure min_open doesn't go below 0
            max_open--;
        } else if (s[i] == 'J') {  // Joker can be (, ), or empty
            min_open = (min_open > 0) ? min_open - 1 : 0; // Treat J as ) or empty
            max_open++;  // Treat J as (
        }

        if (max_open < 0) {  // Too many closing brackets at some point
            return false;
        }
    }

    return min_open == 0;  // The sequence is valid if min_open is 0
}
