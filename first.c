#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "Hello world";
    char *str = text;
    int i, len = strlen(str);

    printf("Original string : %s\n", str);

    for (i = 0; i < len; i++)
        str[i] = str[i] ^ 0;

    printf("After XOR with 0 : %s\n", str);

    return 0;
}