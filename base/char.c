# include<stdio.h>
# include<string.h>
char * find_first(char * data,char x)
{
    char * p = strchr(data,x);
    printf("find :%c\n",*(p+3));
    return p;
}


int main()
{
    char name[3] = {'h','i','o'};
    char name2[2] = {'p','o'};
    char *p = &name[0];
    *(p + 3) = 'l';
    int i;
    for (i=0;i<5;i++){
        printf("%c",*p++);
    } 
    printf("\n");
   
    char str1[] = {'h','e','e',';','\0','\n'};
    // it end by \0 so \n is not exists;
    for(i=0;i<5;i++){
        printf("%c",str1[i]);
    }
    // we can define char[] as follow:
      
    char word[] = {"hello"};
 
    char word2[] = "my name is vink\n";
    
    p = &word[0];
   
    /*
    for(i=0;i<15;i++){
        printf("%c",*p++);
    }
    */

    printf("\n");
    
    // it will print abchello because it can't save \0 to end str 
    char word3[3] = "abc";
    printf("%s\n",word3);
     
    char word5[4] = "abc";  
    char word4[10];
    for(i=0;i<10;i++){
        if(i<=3){
            word4[i] = word5[i];
        } else{
            word4[i] = 'j';
        }
    }
    //because word5 contain \0  so it end by abc\0 ;
    printf("%s\n",word4);
    
    printf("find str by strchr\n");
    
    char data[] = "i think this is a very useful good";
    p = find_first(data,'a');
    printf("find char a at locaton %ld\n",p-data);
    printf("check str equal\n");
       
    char a[] = "me";
    char b[] = "your";
    char c[] = "your";
    if(strcmp(a,b)!=0){
        printf("a not is equal b\n"); 
    }
    if(strcmp(b,c)==0){
        printf("b is equal c\n"); 
    }
    int cmp = strcmp(a,b);
    printf("stcmp len %d\n",cmp);
 
}

