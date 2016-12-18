#include <stdio.h>

int main(void)
{
    printf("hello,\c world\n");
    printf("hello,\h world\n");
    printf("hello,\d world\n");
    printf("hello,\z world\n");

    printf("hello,\0 world\n");
    printf("hello,\1 world\n");
    printf("hello,\2 world\n");
    printf("hello,\3 world\n");
    printf("hello,\4 world\n");

    return 0;
}
