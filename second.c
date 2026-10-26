#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "Hello world";
    char *str = text;
    int i, len = strlen(str);
    unsigned char a[50], o[50], x[50];

    for (i = 0; i < len; i++)
    {
        a[i] = str[i] & 127;
        o[i] = str[i] | 127;
        x[i] = str[i] ^ 127;
    }

    a[len] = o[len] = x[len] = '\0';

    printf("Original string : %s\n", str);
    printf("AND with 127 : %s\n", a);

    printf("OR with 127 (ASCII codes): ");
    for (i = 0; i < len; i++)
        printf("%u ", o[i]);

    printf("\nXOR with 127 (ASCII codes): ");
    for (i = 0; i < len; i++)
        printf("%u ", x[i]);

    printf("\n");

    return 0;
}
