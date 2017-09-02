#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include "windows.h"
#include "time.h"
#include "ctype.h"

int main(){
    char ctrl;

    inicio:
    system("cls"); //limpa a tela
    menu();
    fflush(stdin);
    scanf("%c",&ctrl);
    ctrl=toupper(ctrl);
        switch(ctrl){
            case 'H':help();break;
            case 'Q':puts("Saindo..");sleep(400);return (0);
            case '1':armadilha();break;
            case '2':estrelas();break;
            default: puts("ERRO: VALOR INVALIDO");sleep(2000);goto inicio;
        }}
