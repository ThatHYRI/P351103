#ifndef DEVELOPER_H_CXRJSJD88W
#define DEVELOPER_H_CXRJSJD88W

#define DEV_NAME_LENGTH (40U)
#define DEV_ALIAS_LENGTH (40U)

//include needed?
#include <stdbool.h>

#include "developer_group.h"
//#include ""


typedef struct {
    char dev_name[DEV_NAME_LENGTH];
    char dev_alias[DEV_ALIAS_LENGTH];
} developer;

//initialize developers
void developer_init(developer *devptr, const char *dev_name, const char *alias_name);

#endif //DEVELOPER_H_CXRJSJD88W