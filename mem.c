#include <stdio.h>
#include <stdlib.h>

// data
int global_count = 3;

void greet() {
    // stack
    char msg[] = "Hi";
    printf("%s\n", msg);
}

int main() {
    // stack
    int local_val = 5;

    // heap
    char *dynamic = malloc(10);
    dynamic[0] = 'A';
    dynamic[1] = '\0';

    greet();

    printf("global: %d, local: %d, dynamic: %s\n", global_count, local_val, dynamic);

    free(dynamic);
    return 0;
}