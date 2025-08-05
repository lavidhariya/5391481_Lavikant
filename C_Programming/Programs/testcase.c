// Printing the days of the week using a for loop

#include <stdio.h>

int main() {
    int day;

    for (int i = 1; i <= 3; i++) {
        printf("%d Enter any day between 1 to 7: ", i);
        scanf("%d", &day);

        switch(day) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
            default:
                printf("Enter Correct choice.\n");
        }
    }

    return 0;
}