#include <stdio.h>

int main(void)
{
    int height = 8;
   
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j < height; j++)
            {
                if(j + i< height - 1)
                {
                    printf(" ");
                }
                else printf("#");
            }
            for(int k = i; k > 0; k--)
            {
                printf("#");                  
            }
            printf("\n");
        }
}