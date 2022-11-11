#include <stdio.h>
// -------- Write a program in C using recursion to print the first 50 natural numbers --------
int natNums_rec(int n);

int main()
{
    int n = 1;
    natNums_rec(n);

    return 0;

}

int natNums_rec(int n){
    if(n<=50)
    {
        printf("%i\t",n);
        natNums_rec(n+1);
    }
}