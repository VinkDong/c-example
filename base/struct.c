# include <stdio.h>

struct date 
{
    int year;
    int month;
    int day;
};

int main()
{
    struct date today;
    today.year = 2012;
    today.month = 011;
    today.day = 0xF;
    
    int * p = &today.year; 
    printf("today is %d-%d-%d\n",today.year,today.month,today.day);
    printf("today is by point is %d-%d-%d\n",*p, *++p,*++p);
    
    struct date someday={.year=2015,.month=10,.day=11};
    
    p += 3; 
    printf("can I get someday by p+3? : %d-%d-%d\n",*p,*++p,*++p);
    struct date tomorrow = {2012,9,16};
    printf("tomorrow is %d-%d-%d\n",tomorrow.year,tomorrow.month,tomorrow.day);
}
