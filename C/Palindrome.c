#include <stdio.h>
#include <string.h>


int main(){

    int palindrome[] = {4,4,2,2,4,4};
    //Sizeof(arr) returns valye in bytes, so we need to divide the return value using the type of data we are using.
    //After we divide using the same type of data (equal bytes), we get the actual length of the array.
    int len = sizeof(palindrome) / sizeof(palindrome[0]);
    for(int i = 0; i < len; i++){
        //Using -1 beucase i starts from 0 and i.
        if(palindrome[i] != palindrome[len - i - 1]){
            return 1;
        }
    }
    return 0;

}