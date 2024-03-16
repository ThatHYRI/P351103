#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//include other headers
#include "developer_group.h"
#include "developer.h"
#include "developer.c"
#include "developer_group.c"

int main(void) {

    char *ptr = NULL;  //ptr on standby
    char input1[10];

    long act = 0;
    int loop = 1;   //loop for menu, 0=end

    //initialize names
    developer Matthies;
    developer_init(&Matthies, "Matthies Otten", "XAZDI1");
    developer Hainam;
    developer_init(&Hainam, "Hai Nam Nguyen", "ThatHYRI");

    //print menu gui
    while(loop) {
        printf("==================================\n");
        printf("      [ CHOOSE YOUR ACTION ]      \n");
        printf("       List Developers  [1]       \n");
        printf("       Print Group Logo [2]       \n");
        printf("       Print Group      [3]       \n");
        printf("       EXIT             [4]       \n");
        printf("==================================\n");

        printf("Enter selection: ");
        //scan user input
        scanf("%s", input1);
        //convert string to long for switch case
        act = strtol(input1, &ptr, 10);

        //switch case for options
        switch (act) {
            case 1:
                //developer list
                print_developer(&Matthies);
                print_developer(&Hainam);
                break;
            case 2:
                //logo
                print_logo();
                break;
            case 3:
                //logo & dev list
                print_group(&Matthies, &Hainam);
                break;
            case 4:
                //end exe
                loop = 0;
                break;
            default:
                printf("Invalid Input, try again.\n");
                break; 
        }
    }
}  

