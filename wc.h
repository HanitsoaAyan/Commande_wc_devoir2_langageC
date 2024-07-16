#include <stdio.h>
FILE* open(char* fichier);
void option_c(FILE* file,char* fichier);
void option_m(FILE* file,char* fichier);
void option_w(FILE* file,char* fichier);
void option_l(FILE* file,char* fichier);
void option_L(FILE* file,char* fichier);
void tout_option(FILE* file,char* option,char* fichier,int argc);