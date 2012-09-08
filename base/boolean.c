# include <stdio.h>
# include <stdbool.h>

int main()
{
    _Bool boolvar = false;
    printf("this is a bool var %d\n",boolvar);
    
    bool var = false;
    // false from stdbool.h so if not import and we can't use it 
    printf("this is a bool var and import from <stdbool.h> %i\n",var);
}

