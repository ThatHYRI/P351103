#include <stdio.h>
#include <string.h>

#include "developer.h"

void printdev(developer const *devptr) {
    printf("------------------------------\n");
    printf("==============================\n");
    printf("DEVELOPER:\n");
    printf("Name: %s\n", devptr->dev_name);
    printf("Alias: %s\n", devptr->dev_alias);
    printf("==============================\n");
    printf("------------------------------\n");
}

void developer_init(developer *devptr, const char dev_name[DEV_NAME_LENGTH], const char alias_name[DEV_ALIAS_LENGTH]) {
    if (devptr == NULL) {
        printf("INVALID DEV DATA PRINT");
    }
    else {
        //ptrdev points on name&alias
        strncpy(devptr->dev_name, dev_name, DEV_NAME_LENGTH-1);
        devptr->dev_name[DEV_NAME_LENGTH - 1] = '\0';  //null termination
        strncpy(devptr->dev_name, dev_name, DEV_ALIAS_LENGTH-1);
        devptr->dev_name[DEV_ALIAS_LENGTH - 1] = '\0';
    }
} 