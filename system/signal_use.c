#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

static void prepare_system_start()
{
    printf("System need prepare start now\n");
}

static void signal_handler(int signal)
{
    printf("this is a signal handler");
    switch(signal){
        case SIGINT:
             prepare_system_start();
             break;           
        default:
             exit(0); 
    }
}

int main()
{
    signal(SIGINT,&signal_handler);     
    signal(SIGQUIT,&signal_handler);
    signal(SIGILL,&signal_handler);
    signal(SIGSEGV,&signal_handler); 
    int *p = NULL;
    *p =0;
}
