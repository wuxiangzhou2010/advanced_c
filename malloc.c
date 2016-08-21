/*
check how much a program can get using malloc
malloc need stdlib.h

*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    void *p;
    int cnt = 0;
    while((p = malloc(100*1024*1024)))
    {
        cnt++;
    }
    printf("allocated %d00M memory\n", cnt);

    return 0;
}
