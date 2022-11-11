#include <stdio.h>
// -------- Write a C program to print the following characters in a reverse way. --------

 
int main() 
{
   char *name = "XLM";

   for(int i = 2; i >= 0; i--){
    printf("%c", name[i]);
   }
    return 0;  
}
