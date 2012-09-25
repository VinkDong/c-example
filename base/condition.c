# include <stdio.h>

int main()
{
    int a = 1==2? 3 : 4;
    int b = 2==2? 3 : 4;
    printf("a is %d,b is %d \n",a,b);

    go_next:
        printf("this is go to next\nyou can see it run with callback\n");  
    go_prev:
        printf("this is go to previous\n");

    printf("start go to\n");
    if(a == 4){
        a++;
        goto go_prev;
    } else {
        //goto go_next; 
    }
}
