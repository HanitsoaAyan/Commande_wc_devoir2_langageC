#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wc.h"

FILE* open(char* fichier)
{
    FILE *file = NULL;
    file=fopen(fichier,"r");

    if(file==NULL)
    {
      exit(1);
    }
    else
    {
        printf("\tCommande WC avec tout option\n");
    }
   
    
    return file;

}
void option_c(FILE* file,char* fichier)
{
    int count=0;
    int p;
    rewind(file);
    while((p =fgetc(file))!= EOF)
    {
        count++;
    }
    printf("Nom du fichier :%s\n",fichier);
    printf("Nombre d'Octet: %d\n ",count);
    //fclose(file);
}
void option_m(FILE* file,char* fichier)
{
    int count1=0;
    int p1;
    rewind(file);
    while(p1=fgetc(file)!=EOF)
    {
        count1++;
    }
    printf("Nombre de caractere : %d\n",count1);
}
void option_w(FILE* file,char* fichier)
{
    char mot[100];
    int count2=0;
    rewind(file);
    while(feof(file)!=1)
    {
        fscanf(file,"%s",mot);
        count2++;
    }
    printf("Nombre de mot : %d\n",count2);
    
}
void option_l(FILE* file,char* fichier)
{
    char mot1[100];
    int count3=0;
    rewind(file);
    int p3;
    while(p3=fgets(mot1,100,file)!=NULL)
    {
        count3++;
    }
    printf("Nombre de ligne : %d\n",count3);
}
// void option_L(FILE* file,char* fichier)
// {
//     char mot2[100];
//     int count4=0;
//     rewind(file);
//     int p4;
//     while(p4=fgets(mot2,100,file)!=NULL)
//     {
//         while(p4=fgetc(file)!=EOF)
//         {
//             count4++;
//         }
//         printf("\n");
//     }
// }
void tout_option(FILE* file,char* option,char* fichier,int argc)
{
  
    if(argc==2)
    {
        option_c(file,fichier);
        option_m(file,fichier);
        option_w(file,fichier);
        option_l(file,fichier);
        //option_L(file,fichier);
    }

    if(strcmp(option,"-c")==0)
    {
        option_c(file,fichier);
    }
    if(strcmp(option,"-m")==0)
    {
        option_m(file,fichier);
    }
    if(strcmp(option,"-w")==0)
    {
        option_w(file,fichier);
    }
    if(strcmp(option,"-l")==0)
    {
        option_l(file,fichier);
    }
    // if(strcmp(option,"-L")==0)
    // {
    //     option_L(file,fichier);
    // }
}