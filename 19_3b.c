#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, z;
    x=z=1;
    y=0;
    z= ++x || ++y && ++z;
    printf("%d %d %d", x,y,z);

    return 0;
}
