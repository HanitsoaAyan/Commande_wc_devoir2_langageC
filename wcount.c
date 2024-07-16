#include <stdio.h>
#include "wc.h"

int main (int argc,char* argv[])
{
    FILE* file=NULL;
    file=open(argv[argc-1]);
    /*option_c(file,argv[1]);
    option_m(file,argv[1]);
    option_w(file,argv[1]);
    option_l(file,argv[1]);
    option_L(file,argv[1]); 
    */
    printf("%d", argc);
    tout_option(file,argv[1],argv[argc-1],argc);
    
    return 0;
}
