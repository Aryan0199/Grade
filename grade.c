#include <stdio.h>
int main() {
    int n;
    printf("Enter the marks\n");
    scanf("%d",&n);
    if(85<=n && n<=100){
        printf("Grade A");
    }
    else if(70<=n && n<=84){
        printf("Grade B");
    }
    else if(55<=n && n<=69){
        printf("Grade C");
    }
    else if(40<=n && n<=54){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }
    return 0;

}
