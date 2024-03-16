#ifndef DEVELOPER_H_CXRJSJD88W
#define DEVELOPER_H_CXRJSJD88W

#define DEV_NAME_LENGTH (40U)
#define DEV_ALIAS_LENGTH (40U)

typedef struct {
    char dev_name[DEV_NAME_LENGTH];
    char dev_alias[DEV_ALIAS_LENGTH];
} developer;

//initialize developers
void developer_init(developer *dev_ptr, const char *dev_name[DEV_NAME_LENGTH], const char *alias_name[DEV_ALIAS_LENGTH]);
//declaration to print developers
void print_developer(developer const *dev_ptr);

#endif //DEVELOPER_H_CXRJSJD88W  