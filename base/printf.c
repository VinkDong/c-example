# include <stdio.h>

int main()
{
    int a = 100;
    float b = 10.1;
    double c = 10.23;
    // bool d  = false;  c has no bool type 
    printf("int value is %d\n",a);
    printf("int value is %i\n",a);
    printf("float value is %.2f\n",b);
    printf("double value is %.5f\n",c);
    printf("show 11e2:%e\n",10e2);
    printf("auto select :%g\n",10e2);
    // printf("boolean value is %d", d);
}

