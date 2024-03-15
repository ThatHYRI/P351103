#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//include other headers
#include "developer_group.h"
//#include 
//#include 

int main(void) {

    //placeholder
    //placeholder

    char *ptr = NULL;  //ptr on standby
    char input1[10];

    long act = 0;
    int continue_loop = 1;   //loop for menu, 0=end

    developer Matthies;
    developer_init(&Matthies, "Matthies Otten", "XAZDI1");
    developer Hainam;
    developer_init(&Hainam, "Hai Nam Nguyen", "ThatHYRI");


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

        //switch case for options
        switch (act) {
            case 1:
                //devlist
                printf("1 IS PRESSED\n");
                break;
            case 2:
                //logo
                printf("2 IS PRESSED\n");
                break;
            case 3:
                //logo&dev
                printf("3 IS PRESSED\n");
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