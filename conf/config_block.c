# include<stdio.h>
# include<config.h>

#ifdef SHOW_FUNC
void show()
{
    printf("show the func\n");
}

#endif
int main()
{
    #ifdef SHOW_BLOCK
    printf("define show block\n");
    #endif
    
    #ifdef SHOW_FUN
    show();
    #endif
}

