#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    void *new_ptr;

    /* If ptr is NULL, equivalent to malloc(new_size) */
    if (ptr == NULL) {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL) {
            return NULL;
        }
        return new_ptr;
    }

    /* If new_size is zero and ptr is not NULL, equivalent to free(ptr) */
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    /* If new_size equals old_size, do nothing and return ptr */
    if (new_size == old_size) {
        return ptr;
    }

    /* Allocate memory for the new block */
    new_ptr = malloc(new_size);
    if (new_ptr == NULL) {
        return NULL;
    }

    /* Copy data from the old block to the new block */
    if (new_size < old_size) {
        memcpy(new_ptr, ptr, new_size);
    } else {
        memcpy(new_ptr, ptr, old_size);
    }

    /* Free the old memory block */
    free(ptr);

    return new_ptr;
}

