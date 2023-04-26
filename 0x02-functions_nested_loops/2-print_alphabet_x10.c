/*
 * This function prints the lower case alphabet ten times, with each iteration on a new line.
 * It does not take any arguments or return any values.
 */
void print_alphabet_x10(void)
{
    // Loop through 10 iterations
    for (int i = 0; i < 10; i++) {
        // Loop through the alphabet and print each character
        for (char c = 'a'; c <= 'z'; c++) {
            putchar(c);
        }
        // Print a newline character to move to the next line
        putchar('\n');
    }
}

