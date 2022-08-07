
#include <stdio.h>


int printStrLen()
{
    int i = 0;

    char ch[] = "test\n";

    for (i = 0;i < 10;i++)
    {
        printf("%c",ch[i]);
    if (ch[i] == '\n')
     {
         i = 10;
         printf("\n");
         return 0;
     }
    }
    //printf("%d\n", strlen(ch));
    
    return 0;
}

int main()
{
    
    
    printStrLen();
   

    return  0;
}