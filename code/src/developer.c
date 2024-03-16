#ifndef DEVELOPER_C
#define DEVELOPER_C

#include <stdio.h>
#include <string.h>

#include "developer.h"

//print developers, Function1
void print_developer(developer const *dev_ptr) {
    printf("                              \n");
    printf("------------------------------\n");
    printf("==============================\n");
    printf("DEVELOPER:\n");
    printf("Name: %s\n", dev_ptr->dev_name);
    printf("Alias: %s\n", dev_ptr->dev_alias);
    printf("==============================\n");
    printf("------------------------------\n");
    printf("                              \n");
}

void developer_init(developer *dev_ptr, const char *dev_name[DEV_NAME_LENGTH], const char *dev_alias[DEV_ALIAS_LENGTH]) {
    //checking on dev_ptr
    if (dev_ptr == NULL) {
        printf("INVALID DEV DATA PRINT");
    }
    else {
        //ptr_dev points on name&alias
        strncpy(dev_ptr->dev_name, dev_name, DEV_NAME_LENGTH-1);
        dev_ptr->dev_name[DEV_NAME_LENGTH - 1] = '\0';  //null termination
        strncpy(dev_ptr->dev_alias, dev_alias, DEV_ALIAS_LENGTH-1);
        dev_ptr->dev_alias[DEV_ALIAS_LENGTH - 1] = '\0';
    }
} 

#endif //DEVELOPER_C  