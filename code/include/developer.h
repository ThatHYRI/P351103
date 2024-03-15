//#ifndef DEVELOPER_H_CXRJSJD88W
//#define DEVELOPER_H_CXRJSJD88W
#ifndef DEVELOPER_H
#define DEVELOPER_H

#define DEV_NAME_LENGTH (40U)
#define DEV_ALIAS_LENGTH (40U)

//include needed?
#include <stdbool.h>

//#include "developer_group.h"
//#include ""


typedef struct {
    char dev_name[DEV_NAME_LENGTH];
    char dev_alias[DEV_ALIAS_LENGTH];
} developer;

//initialize developers
void developer_init(developer *dev_ptr, const char *dev_name, const char *alias_name);

//declaration to print developers
void print_dev(developer const *dev_ptr);

#endif //DEVELOPER_H_CXRJSJD88W