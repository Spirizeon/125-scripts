#include <stdio.h>

int main(){
    int a=1,b=1,c,i,n,temp;
    scanf("%d",&n);
    printf("%d %d ",a,b);
        for(i=3;i<=n;i++){
            c = a+b;
            printf("%d ",c);
            temp = b; //old value of b
            b = c; //b grabs value of c
            a = temp; //a grabs old value of b
        }
    return 0;
}
