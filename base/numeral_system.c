# include <stdio.h>

// this is show `进制` but i don't know how to translate it

int main()
{
    int a = 050;
    int b = 50;
    int c = 0x50;
    //there has no method to define 
    printf("this is decimal %%o -> %%d number %d\n",a);
    printf("this is a octonary %o\n",a);
    printf("this is a octonary number and start with 1 :%#o\n",b);
    printf("this is a hexadecima number %x\n",c);
    printf("this is a hexadecima number and start with 0x: %#x\n",b);
}
