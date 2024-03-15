#include <stdio.h>
#include <string.h>

#include "developer.h"

void printdev(developer const *devptr) {
    printf("------------------------------\n");
    printf("==============================\n");
    printf("DEVELOPER:\n");
    printf("Name: %s\n", devptr->developer_name);
    printf("Alias: Marauder\n");
    printf("==============================\n");

}




/*void developer_print(developer const *const dpr) {
    if (dpr == NULL) {
        printf("INVALID DEV DATA PRINT");
    }
    else {
        printf("------------------------------\n");
        printf("==============================\n");
        printf("DEVELOPER:                    \n");
        printf("Name: \033Matthies Otten\033  \n");
        printf("Alias: Marauder               \n");
        printf("==============================\n");
        printf("==============================\n");
        printf("DEVELOPER:                    \n");
        printf("Name: \033Matthies Otten\033      \n");
        printf("Alias: Marauder               \n");
        printf("==============================\n");
        printf("------------------------------\n");
    }

} */