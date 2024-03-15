#include <stdio.h>
#include <stdlib.h>

//include other headers
#include "developer.h"
//#include 
//#include 

int main() {

    //placeholder
    //placeholder

    long act = 0;

    char *ptr = NULL;  //ptr on standby
    char input1[10];

    int continue_loop = 1;   //loop for menu, 0=end

    //#if & #endif


    while(continue_loop) {
        printf("==================================\n");
        printf("      [ CHOOSE YOUR ACTION ]      \n");
        printf("       List Developers  [1]       \n");
        printf("       Print Group Logo [2]       \n");
        printf("       Print Group      [3]       \n");
        printf("       EXIT             [4]       \n");
        printf("==================================\n");

        printf("Enter selection: ");
        scanf("%s", input1);
        act = strtol(input1, &ptr, 10);

        switch (act) {
            case 1:
                list_devs();
            case 2:
                //logo
                break;
            case 3:
                //logo&dev
                break;
            case 4:
                //end exe
                continue_loop = 0;
                break;
            default:
                printf("Invalid Input, try again.\n");
                break; 
        }
    }
}