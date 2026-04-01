#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "hello ";   // increased size
    char str2[] = "world";

    strcat(str, str2);
    printf("%s", str);

    return 0;
}