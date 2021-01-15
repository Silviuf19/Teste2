#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nr1, nr2, s;
    nr1 = atoi(argv[1]);
    nr2 = atoi(argv[2]);
    s = nr1 + nr2;
    printf("%d + %d = %d \n", nr1, nr2, s);
    return 0;

}
