#include "developer_group.h"
#include "developer.c"
#include <stdio.h>

//print ZF & OPEL Logo, Function2
void print_logo(void) {
    printf("                                                                      \n");
    printf("          oooooooo                           oooooooo                 \n");
    printf("      oo            oo                   oo            oo             \n");
    printf("    ooooooooo oooooooooo               o                  o           \n");
    printf("  o      ooo  ooo        o      ooooooooooooooooooooooooo   o         \n");
    printf(" o      ooo   oooooo      o         o         ooooooooo      o        \n");
    printf(" o     ooo    ooo         o         o      ooooooooo         o        \n");
    printf("  o   ooo     ooo        o           o   ooooooooooooooooooooooooo    \n");
    printf("    oooooooooooooooooooo               o                  o           \n");
    printf("      oo            oo                   oo            oo             \n");
    printf("          oooooooo                           oooooooo                 \n");
    printf("                                   O        P        E        L       \n");
    printf("                                                                      \n");
}


//print logo and developers, Function3
void print_group(developer const *dev_ptr1, developer const *dev_ptr2) {
    print_logo();
    print_developer(dev_ptr1);
    print_developer(dev_ptr2);
}
