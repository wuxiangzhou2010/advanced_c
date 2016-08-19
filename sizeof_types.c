/*
get the size of different type.
int, long maybe different according to different cpu type
compile: gcc -g -o sizeof_types sizeof_types.c (to get 32bit use -m32)
*/
#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("sizeof(char) = %ld \n", sizeof(char));
    printf("sizeof(int) = %ld \n", sizeof(int));
    printf("sizeof(chort) = %ld \n", sizeof(short));
    printf("sizeof(float) = %ld \n", sizeof(float));
    printf("sizeof(long) = %ld \n", sizeof(long));
    printf("sizeof(long long)= %ld \n", sizeof(long long));

   return 0;

}
