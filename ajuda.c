void help(){
    system ("cls");
    textbackground(9);
    printf("                                      AJUDA                                     ");
    textbackground(0);
    printf("\n1-ARMADILHA:\n\n");
    printf("Em ARMADILHA o computador gera um numero entre 1 e 100 e o jogador tentara\nprender o numero do oponente entre dois numeros. O computador ira mostrar \numa das mensagens abaixo:");
    textbackground(14);printf("\n\nMeu numero esta entre os seus");textbackground(0);printf("  ou  ");textbackground(4); printf("Meu numero nao esta entre os seus\n");
    textbackground(0);
    printf("\ndependendo se o numero gerado estiver ou nao entre os valores colocados pelo \njogador. O jogo acabara quando o jogador aprisionar completamente \no numero gerado pelo computador");

    printf("\n\n2-ESTRELAS:\n\n");
    printf("Em ESTRELAS o objetivo e adivinhar um numero N(entre 32 e 128) gerado pelo \ncomputador.");
    printf("\nA cada entrada o computador emitira uma mensagem composta por ''estrelas'', sendo que a diferenca");
    printf("podera ser tanto para cima quanto para baixo:");



puts("\n\nDiferenca | Mensagem  \n");
puts("     >=64 * (1 estrela)");
puts("     >=32 ** (2 estrelas)");
puts("     >=16 *** (3 estrelas)");
puts("     >=8 **** (4 estrelas)");
puts("     >=4 ***** (5 estrelas)");
puts("     >=2 ****** (6 estrelas)");
puts("      =1 ******* (7 estrelas)");

puts("\nPressione qualquer tecla para voltar ao menu...");
getch();
main();
}
