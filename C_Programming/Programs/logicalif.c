//To check if you are eligible for driving
#include<stdio.h>
int main(){
    int age;
    char licence;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Does the user has a valid licence? (y/n)");
    scanf("%c", &licence);
    
    if (age>18 && licence == 'y')
    printf("Eligible to drive\n");
    else if(age>18 && licence == 'n')
    printf("Eligible to drive but get a valid licence\n");
    else
    printf("Not eligible to drive\n");

    return 0;

}