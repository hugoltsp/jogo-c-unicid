#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "conio.h"

void armadilha(){
    int limsup, liminf;
    int x,z=0;
    system("cls");
    srand(time(NULL));
    x=rand()%100+1; // gera um numero de 1 a 100
   
    textbackground(9);
    puts("Ja pensei no numero. Agora e sua vez de adivinhar um numero de 1 a 100          ");
    textbackground(0);

    while(1){

        printf("\nDigite o limite inferior:");
        scanf("%d",&liminf);
        printf("\nDigite o limite superior:");
        scanf("%d",&limsup);
        z++; //z representa o numero de tentativas
        if((liminf>x || x>limsup) || (x<liminf || limsup<x)) { textbackground(4); puts("\nO numero nao esta entre os seus!\n"); textbackground(0);}
        else if(x==liminf && x==limsup) break;
        else if((liminf<x && x<limsup) || (liminf<=x || x<=limsup)) { textbackground(14);puts("\nO numero esta entre os seus!\n"); textbackground(0);}

    }
        textbackground(2);
        printf("\nVoce levou %d tentativas para acertar",z);
        textbackground(0);
        puts("\n\nPressione qualquer tecla para voltar ao menu...");
        getch();
main();
}
