#include <stdio.h>

size_t strlen(char* c) {
    size_t len = 0;
    char* p  = c;
    while (*(p++)) len++;
    return len;
}

int main() {
    char* s = "Hello world";
    printf("Length = %d\n", strlen(s));
}
