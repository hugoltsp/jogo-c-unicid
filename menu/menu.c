void menu(){
    int i;
    int x=23,y=6;

        textbackground(9);
        printf("                    PRESSIONE 'Q' PARA SAIR E 'H' PARA AJUDA                    ");
        textbackground(4);
        textcolor(4);  
        for(i=0;i<10;i++){
            sleep(35);
            gotoxy(x,y);
            putchar(219); // para por um quadradinho na tela.
            y++;
                          }

        for(i=0;i<35;i++){
            sleep(35);
            gotoxy(x,y);
            putchar(219);
            x++;
                          }

        for(i=0;i<10;i++){
            sleep(35);
            gotoxy(x,y);
            putchar(219);
            y--;
                          }

        for(i=0;i<35;i++){
            sleep(35);
            gotoxy(x,y);
            putchar(219);
            x--;
                          }
            textcolor(7); // voltar a cor do texto padrão (cinza).
            textbackground(0); //volta a cor do fundo (preta).
            gotoxy(35,10);  // linha e coluna
            printf("1-ARMADILHA");gotoxy(35,11);printf("2-ESTRELAS");gotoxy(35,12);
                                     }
