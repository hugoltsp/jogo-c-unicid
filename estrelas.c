#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "conio.h"
#include "windows.h"

void estrelas(){
    int x=0,z=0;
    int usr=0;


    system("cls");
    srand(time(NULL));
    while(x<32){
        x=rand()% 129;
        }
    textbackground(9);
    puts("          Ja tenho um numero em mente.Agora e a sua vez de adivinhar            ");
    textbackground(0);
    while(usr!=x){
        z++;
        textcolor(7);
        printf("\n\nEntre com um valor entre 32 e 128:");
        textcolor(4);
        scanf("%d",&usr);
        if(usr<x)
        ast((x-usr));
        else if(usr>x)
        ast((usr-x));
    }
    textbackground(2);
    printf("\n\nVencedor apos %d tentativas",z);
    textbackground(0);
    textcolor(7);
    puts("\n\nPressione qualquer tecla para voltar ao menu...");
    getch();
    main();
}

void ast(x){
    textbackground(14);
    if (x>=64) {
        printf("*");
        som(1);}
  	else if (x>=32) {
  	    printf("**");
  	    som(2);}
 	else if (x>=16) {
 	    printf("***");
 	    som(3);}
 	else if (x>=8) {
 	    printf("****");
 	    som(4);}
  	else if (x>=4) {
  	    printf("*****");
  	    som(5);}
 	else if (x>=2) {
 	    printf("******");
 	    som(6);}
 	else if (x>=1) {
 	    printf("*******");
 	    som(7);}
 	    textbackground(0);
           }


 void som(int x) {
 	for(int i=1;i<=x;i++)
 		printf("\a");
                   }
