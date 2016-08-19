
#include<stdio.h>

int main(int argc, char *argv[])
{
    unsigned int a = 0;
    int b = 0;
    a--;
    printf("the max of unsigned int is %u \n",a);
    while(b >=0)
        b++;
    printf("the max of signed int is %d \n", b);
    b--;
    printf("the min of signed int is %d \n", b);
    return 0;
}
