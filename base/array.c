# include <stdio.h>

int main()
{
    int x[10];
    x[0] = 20;
    x[2] = 30;
    int y[5]= {1,2,3,[4]=2,[3]=9};
    int *p = &x[0];
    
    int i;
    for(i=0;i<20;i++){
       printf("x[%d] is %d\n",i, *p);
       p++;
    }
    for(i=0;i<5;i++){
       printf("y[%d] is %d\n",i, y[i]); 
    }

    struct study{
        char name[10];
        int fee;
    };
      
    struct study vallege[2]={[1].fee=20,[0].fee=50,[0].name={'a','b'}};
     
}
