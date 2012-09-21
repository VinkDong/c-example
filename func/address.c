# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char* search_in_addr(char* s,int len, char *d)
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
 
char * copy_value_from_address(char *src,int len)
{
    char *new = calloc(len,sizeof *src);
    memcpy(new,src,len);
    return new;
}

char * delete_from_address(char *src,int src_len,char *dest,int dest_len)
{
    char * delete_position = search_in_addr(src,src_len,dest);
    if(delete_position == NULL) return NULL;
    int header_len = delete_position - src;
    int end_len = src_len - header_len - dest_len;
     
    char * new_char = calloc(delete_position-src, sizeof * src);
    memcpy(new_char,src,header_len);
    memcpy(new_char+header_len,delete_position+dest_len,end_len);
    return new_char;   
}

char * insert_to_address(char *src,int src_len,char *location,int location_len,char *dest,int dest_len,int insert_before)
{
    char * insert_position = search_in_addr(src,src_len,location);
    if(insert_position == NULL) return NULL;
    int header_len = insert_position- src;
    int end_len = src_len - header_len - location_len;
    char *end_chars = copy_value_from_address(insert_position+location_len,end_len);
    
    int i;
    printf("func `insert_value_to_address`\n");
   
    // todo :to delete -->>
    for(i=0;i<end_len;i++)
    {
        printf("%c",*end_chars++);
    }
    end_chars -= end_len;
    // --<< to delete 
    
    char *new_char = calloc(src_len+dest_len,sizeof *src);
   
    if(insert_before)
    {
        memcpy(new_char,src,header_len);
        char * curr = new_char+header_len;
        memcpy(curr,dest,dest_len);
        curr = curr + dest_len;
        memcpy(curr,insert_position,end_len+location_len); 
    }else{
        memcpy(new_char,src,header_len+location_len);
        char * curr = new_char+header_len+location_len;
        memcpy(curr,dest,dest_len);
        curr = curr + dest_len;
        memcpy(curr,insert_position+location_len,end_len);
    }
    /*
    be careful print ,it can make error return;
    printf("\n");
    for(i=0; i<src_len+dest_len;i++)
    {
        printf("%c",*new_char++);
    }
    */   
    return new_char;
}

int main()
{
    char *p = calloc(100,sizeof *p);

     
    char q[] = "this is a string and we will insert value";
    
    char fd[] = "insert ";
    memcpy(p,q,43);
    int i;

    char *insert_p = search_in_addr(p,40,fd);
    
    printf("%c\n",*insert_p);
   
    char *newstr =  copy_value_from_address(insert_p+7,7);
    
    for(i=0;i<9;i++){
        printf("%c",*newstr);
        newstr++;
    }
     
    char ind[] = "opened";
    insert_to_address(p,43,fd,7,ind,6,1);
    char ded[] = "and ";
    char *new_char = delete_from_address(p,43,ded,4);
    
    
}
