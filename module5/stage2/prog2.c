#include <stdio.h>
#include <string.h>
 
int main()
{
    char name[] = "aysuya";
    int conf=0;
    // scanf("%s",name);
    for(int i=0;i<strlen(name)/2;i++){
        if(name[i]!=name[strlen(name)-i-1]){
            conf = 1;

        }
    }
    if(conf!=0){
        printf("%s is not palindrome",name);
    }
    else{
        printf("%s is palindrome",name);
    }
    return 0;
}

