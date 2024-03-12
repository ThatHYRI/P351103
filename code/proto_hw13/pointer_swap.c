#include <stdio.h>

int main(void)
{
    // define two ints
    int x = 5;
    int y = 4;

    printf("x = %i, y = %i\n", x, y);

    // define two pointers
    int* p_x = &x;
    int* p_y = &y;

    // use the pointers and a temp variable to swap the values
    int temp = *p_x;
    *p_x = *p_y;
    *p_y = temp;

    printf("swapped: x = %i, y = %i\n", x, y);

    //printf("                                                                      ");
    //printf("          oooooooo                           oooooooo                 ");
    //printf("      oo            oo                   oo            oo             ");
    //printf("    ooooooooo oooooooooo               o                  o           ");
    //printf("  o      ooo  ooo        o      ooooooooooooooooooooooooo   o         ");
    //printf(" o      ooo   oooooo      o         o         ooooooooo      o        ");
    //printf(" o     ooo    ooo         o         o      ooooooooo         o        ");
    //printf("  o   ooo     ooo        o           o   ooooooooooooooooooooooooo    ");
    //printf("    oooooooooooooooooooo               o                  o           ");
    //printf("      oo            oo                   oo            oo             ");
    //printf("          oooooooo                           oooooooo                 ");
    //printf("                                   O        P        E        L       ");

    //test print
    printf("                                                                      ");
    printf("                                                                      ");
    printf("          oooooooo                           oooooooo                 ");
    printf("                                                                      ");
    printf("      oo            oo                   oo            oo             ");
    printf("                                                                      ");
    printf("    ooooooooo oooooooooo               o                  o           ");
    printf("                                                                      ");
    printf("  o      ooo  ooo        o      ooooooooooooooooooooooooo   o         ");
    printf("                                                                      ");
    printf(" o      ooo   oooooo      o         o         ooooooooo      o        ");
    printf("                                                                      ");
    printf(" o     ooo    ooo         o         o      ooooooooo         o        ");
    printf("                                                                      ");
    printf("  o   ooo     ooo        o           o   ooooooooooooooooooooooooo    ");
    printf("                                                                      ");
    printf("    oooooooooooooooooooo               o                  o           ");
    printf("                                                                      ");
    printf("      oo            oo                   oo            oo             ");
    printf("                                                                      ");
    printf("          oooooooo                           oooooooo                 ");
    printf("                                                                      ");
    printf("                                   O        P        E        L       ");
    printf("                                                                      ");
    printf("                                                                      ");
    printf("                                                                      ");
}
