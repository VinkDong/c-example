# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char* search_in_addr(char* s,int len,char *d)
{
    int i,j,count; 
    char * tmp;
    for(i=0;i<len;i++){
        count = 0 ;
        if(*s == *d){
            tmp = s;
        }else {
            s++;
            continue; 
        }
        while(*d!='\0'){
            if(*d != *s)
            {
                tmp = NULL;
                break; 
            }
            s++;
            d++;
            count ++;
        }
            if(*d != *s)
        if(tmp != NULL) break; 
        d -= count;
    }
    printf("x\n");
    return tmp;
}
 

int main()
{
    char *p = calloc(100,sizeof *p);

     
    char q[] = "this is a string and we will insert value";
    
    char fd[] = "insert";
    memcpy(p,q,43);
    int i;
    for(i=0;i<100;i++){
        printf("%c",*p++); 
    }

    p-= 100;

    char *insert_p = search_in_addr(p,40,fd);
    
    printf("%c",*insert_p);  
}

