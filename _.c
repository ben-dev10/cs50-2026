// C test file
//%cflags:-lcs50
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
 
int main(void)
{
    char *s = get_string("s: ");
    
    if(s == NULL){
        return 1; // strlen can fail, say a very large input string for example, 
        // guard against that by checking for a NULL return from strlen
    }

    char *t = malloc(strlen(s)+1); 
    if(t == NULL){
        return 1; // same as get_string condition
    } 

    strcpy(t,s);

    if(strlen(s) > 0){
        t[0] = toupper(t[0]); // check if the user provides a value before converting to uppercase
    }
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); // if you asked the computer for memory, remember to give it back at the end of your program,
    // lest you cause a memory leak.
}