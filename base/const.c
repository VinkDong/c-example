#include<stdio.h>

int main()
{
    char c = 83;
    //char * c_point = &c;
    
    // if c_point is always point to c 
    char * const c_point = &c ;
   
    printf("%c\n",*c_point);
     
    char d = 84;
    //if we set c_point = &d ,its error;
    //c_point = &d ;
    
    const char * d_point = &d ;
    
    //*d_point = 87; its error but as follow
    d = 70;
    char e = 84;
    d_point = &e ; // also can be modify by point to other variables
    printf("%c\n",*d_point);   
}
