#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int i, len;
    char temp;

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {

    char str1[] = "tops";
    
    reverse(str1);   // use custom function
    printf("%s", str1);

    return 0;
}