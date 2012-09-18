#include <stdio.h>

void show()
{
    printf("this is a show method\n");
}

int main()
{
    void (*fnShow) (void);
    fnShow = show; // fnShow = &show it also can success
    fnShow();   
}
