#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

    int palindrome[] = {4,4,2,2,4,4};
    char name_palindrome[] = "Anna";
    //Sizeof(arr) returns valye in bytes, so we need to divide the return value using the type of data we are using.
    //After we divide using the same type of data (equal bytes), we get the actual length of the array.
    int len = sizeof(palindrome) / sizeof(palindrome[0]);
    for(int i = 0; i < len; i++){
        //Using -1 beucase i starts from 0 and i.
        if(palindrome[i] != palindrome[len - i - 1]){
            return 1;
        }
    }
    
    //Code for String Arrays
    len = strlen(name_palindrome);
    for(int i = 0; i < len; i++){
        //Must convert to all lower case or all capitcal because C compares chars in ASCII.
        name_palindrome[i] = tolower(name_palindrome[i]);
        if(name_palindrome[i] != name_palindrome[len - i - 1]){
            return 1;
        }
    }
   
   
    return 0;



}