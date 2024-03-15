#ifndef DEVELOPER_H_CXRJSJD88W
#define DEVELOPER_H_CXRJSJD88W

#include <stdbool.h>

#include "developer_group.h"
//#include ""

//extra define
#define DEVELOPER_MAX_NUM_DEVELOPERS 2
//#define

typedef struct {
    developer developer_list[DEVELOPER_MAX_NUM_DEVELOPERS];
    //
    //
} developer;





void list_devs(developer const *lpr);

#endif //DEVELOPER_H_CXRJSJD88W