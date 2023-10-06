#include <unistd.h>

/* This is the main function of our program */
int main(void)
{
    /* We use the write function to print a message to the standard error (file descriptor 2) */
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    
    /* The main function returns 1 as requested */
    return (1);
}

