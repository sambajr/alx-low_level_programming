on
This function prints a string, followed by a new line, using recursion.

Prototype:

void _puts_recursion(char *s);
Example:
#include "main.h"

int main(void) {
    _puts_recursion("Puts with recursion");
    return (0);
}
Output:

Puts with recursion
2. _print_rev_recursion
This function prints a string in reverse using recursion.

Prototype:
void _print_rev_recursion(char *s);
Example:
#include "main.h"

int main(void) {
    _print_rev_recursion("Colton Walker");
    return (0);
}
Output:

reklaW notloC
3. _strlen_recursion
This function returns the length of a string using recursion.

Prototype:
int _strlen_recursion(char *s);
Example:
#include "main.h"
#include <stdio.h>

int main(void) {
    int n;
    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
Output:

14
4. factorial
This function returns the factorial of a given number using recursion. It handles negative numbers and 0.

Prototype:
int factorial(int n);
Example:
#include "main.h"
#include <stdio.h>

int main(void) {
    int r;
    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
Output:

diff
1
120
3628800
-1
5. _pow_recursion
This function returns the value of x raised to the power of y using recursion. It handles negative exponents.

Prototype:
int _pow_recursion(int x, int y);
Example:
#include <stdio.h>

int main(void) {
    int r;
    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
Output:

diff
1
1
65536
25
-1
-125
6. is_prime_number
This function checks if an input integer is a prime number using recursion.

Prototype:
int is_prime_number(int n);
Example:
#include <stdio.h>

int main(void) {
    int r;
    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
Output:
0
0
0
1
0
0
1
1
