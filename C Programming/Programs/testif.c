//To check i a number is positive or not
#include <stdio.h>
int main(){
    int x;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    if (x>0){
        printf("X is positive\n");
    }else {
        printf("X is not positive\n");
    }
    return 0;
}