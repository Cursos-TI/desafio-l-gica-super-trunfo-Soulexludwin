// Nome do arquivo: Super Trunfo (Novato).c
// Autor dessa versao: Ryan Kaique
// Data de criacao: 18/04/2025
// Descricao: Jogo de cartas onde o jogador pode comparar dois paises em quatro
// categorias diferentes.
#include <stdio.h>
#include <string.h> // Inclui a biblioteca de manipulacao de strings

int main() {
  // Variaveis das cartas usando Float e int para os atributos;
  // e char para os nomes dos paises, estados, cidades e codigos.
  float PIB1, PIB2, AREA1, AREA2;
  long int POP1, POP2, NPT1, NPT2, MenuPrincipal, comparar;
  char PAIS1[40], PAIS2[40], ESTADO1[40], ESTADO2[40], CIDADE1[40], CIDADE2[40],
      COD1[20], COD2[20], resposta[20];

  // Apresentacao do jogo
  printf("\033[1;31m");
  printf("Bem-vindo ao Super Trunfo!\n");
  printf("\033[0m"); // Reseta a cor do texto
  printf("Neste jogo, voce ira comparar dois paises em varias categorias:\n");

  printf("\033[1;33m");
  printf("Menu Principal:\n");
  printf("1 - Comecar o jogo\n");
  printf("2 - Regras\n");
  printf("3 - Sair\n");
  printf("Escolha uma opcao: ");
  scanf_s("%d", &MenuPrincipal);
  printf("\033[0m");
  switch (MenuPrincipal) {
  case 1:
    printf("1 - Jogo de cartas\n");
    printf("Vamos comecar o jogo!\n");
    break;
  case 2:
    printf("2 - Regras\n");
    printf("As regras do jogo sao:\n");
    printf("1. O jogador deve escolher dois paises para comparar.\n");
    printf("2. O jogador deve inserir os dados de cada pais.\n");
    printf("3. O jogador deve escolher uma categoria para comparar.\n");
    printf("4. O jogador deve inserir os dados de cada pais.\n");
    printf("5. O jogador deve escolher uma categoria para comparar.\n");
    printf("6. Divirta-se!\n");
    printf("Pressione qualquer tecla para voltar ao menu principal.\n");
    scanf_s("%s", resposta, sizeof(resposta));
    return 0;

    break;
  case 3:
    printf("3 - Sair\n");
    return 0;
    break;
  default:
    printf("Opcao invalida!\n");
    return 0;
  }
  printf("Primeiro insira os dados da primeira carta!\n");
  printf("Depois insira os dados da segunda carta!\n");
  // Coletando os dados da primeira carta
  printf("\n\n=== Carta 1 ===\n");

  printf("Digite o nome do pais: ");
  getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
  fgets(PAIS1, sizeof(PAIS1),
        stdin); // Corrigido para reconhecer espacos no nome do pais
  PAIS1[strcspn(PAIS1, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o codigo da carta(EX: A01): ");
  scanf_s("%s", COD1);
  printf("Digite o nome do estado: ");
  getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
  fgets(ESTADO1, sizeof(ESTADO1),
        stdin); // Corrigido para reconhecer espacos no nome do estado
  ESTADO1[strcspn(ESTADO1, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o nome da cidade: ");
  fgets(CIDADE1, sizeof(CIDADE1),
        stdin); // Corrigido para reconhecer espacos no nome da cidade
  printf("Digite o PIB(use ponto, nao virgula): ");
  scanf_s("%f", &PIB1);
  printf("Digite a populacao: ");
  scanf_s("%ld", &POP1);
  printf("Digite a area: ");
  scanf_s("%f", &AREA1);
  printf("Digite o numero de pontos turisticos: ");
  scanf_s("%ld", &NPT1);

  // Adicionando os dados da segunda carta
  printf("\n\nAgora insira os dados da segunda carta!\n");

  printf("\n\n=== Carta 1 ===\n");

  printf("Digite o nome do pais: ");
  getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
  fgets(PAIS2, sizeof(PAIS2),
        stdin); // Corrigido para reconhecer espacos no nome do pais
  PAIS2[strcspn(PAIS2, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o codigo da carta(EX: B01): ");
  scanf_s("%s", COD2);
  printf("Digite o nome do estado: ");
  getchar();
  fgets(ESTADO2, sizeof(ESTADO2),
        stdin); // Corrigido para reconhecer espacos no nome do estado
  ESTADO2[strcspn(ESTADO2, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o nome da cidade: ");
  getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
  fgets(CIDADE2, sizeof(CIDADE2),
        stdin); // Corrigido para reconhecer espacos no nome da cidade
  CIDADE2[strcspn(CIDADE2, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o PIB : ");
  scanf_s("%f", &PIB2);
  printf("Digite a populacao: ");
  scanf_s("%ld", &POP2);
  printf("Digite a area(M): ");
  scanf_s("%f", &AREA2);
  printf("Digite o numero de pontos turisticos: ");
  scanf_s("%ld", &NPT2);

  // Densidade populacional
  float DENSIDADE1 = POP1 / AREA1; // Calculo da densidade populacional
  float DENSIDADE2 = POP2 / AREA2;
  // PIB per capita
  float PIBPC1 = PIB1 / POP1; // Calculo do PIB per capita
  float PIBPC2 = PIB2 / POP2;

  // super poder
  float SUPERPODER1 = PIB1 + PIBPC1 + AREA1 + POP1 + NPT1 +
                      (1 / DENSIDADE1); // Calculo do super poder
  float SUPERPODER2 = PIB2 + PIBPC2 + AREA2 + POP2 + NPT2 + (1 / DENSIDADE2);

  // Mostrando os dados da primeira carta
  printf("\n\nAqui estao as cartas!:\n");

  printf("=== Primeira Carta ===\n");

  printf("Pais: %s\n", PAIS1);
  printf("Codigo: %s\n", COD1);
  printf("Estado: %s\n", ESTADO1);
  printf("Cidade: %s\n", CIDADE1);
  printf("PIB: %.2f\n", PIB1);
  printf("Populacao: %ld\n", POP1);
  printf("area(KM): %.2f\n", AREA1);
  printf("Numero de pontos turisticos: %ld\n", NPT1);
  printf("Densidade populacional: %.2f hab/km\n", DENSIDADE1);
  printf("PIB per capita: %.8f bilhoes/pessoa\n", PIBPC1);
  printf("Super Poder: %.2f\n", SUPERPODER1);

  // Mostrando os dados da segunda carta
  printf("\n\n=== Segunda Carta ===\n");

  printf("Pais: %s\n", PAIS2);
  printf("Codigo: %s\n", COD2);
  printf("Estado: %s\n", ESTADO2);
  printf("Cidade: %s\n", CIDADE2);
  printf("PIB(Bilhoes): %.2f\n", PIB2);
  printf("Populacao: %ld\n", POP2);
  printf("area(KM): %.2f\n", AREA2);
  printf("Numero de pontos turisticos: %ld\n", NPT2);
  printf("Densidade populacional: %.2f hab/km\n", DENSIDADE2);
  printf("PIB per capita: %.8f bilhoes/pessoa\n", PIBPC2);
  printf("Super Poder: %.2f\n", SUPERPODER2);

  // menu de comparacao
  printf("\033[1;34m");
  printf("\n\n=== Comparacao das cartas ===\n");
  printf("o que voce quer comparar?\n");
  printf("1 - PIB\n");
  printf("2 - Populacao\n");
  printf("3 - Area\n");
  printf("4 - PIB per capita\n");
  printf("5 - Numero de pontos turisticos\n");
  printf("6 - Super Poder\n");
  printf("Digite sua escolha: ");
  printf("\033[0m");
  scanf_s("%d", &comparar);

  // switch para comparar os paises
  switch (comparar) {
  // Comparacao de PIB
  case 1:
    printf("Voce escolheu comparar o PIB!\n");
    printf("O PIB do pais %s e %.2f\n", PAIS1, PIB1);
    printf("O PIB do pais %s e %.2f\n", PAIS2, PIB2);
    if (PIB1 > PIB2) {
      printf("O pais %s tem um PIB maior que o pais %s!\n", PAIS1, PAIS2);
    } else if (PIB1 < PIB2) {
      printf("O pais %s tem um PIB maior que o pais %s!\n", PAIS2, PAIS1);
    } else {
      printf("Os paises %s e %s tem o mesmo PIB!\n", PAIS1, PAIS2);
    }
    break;
  // Comparacao de populacao
  case 2:
    printf("Voce escolheu comparar a populacao!\n");
    printf("A populacao do pais %s e %ld\n", PAIS1, POP1);
    printf("A populacao do pais %s e %ld\n", PAIS2, POP2);
    if (POP1 > POP2) {
      printf("O pais %s tem uma populacao maior que o pais %s!\n", PAIS1,
             PAIS2);
    } else if (POP1 < POP2) {
      printf("O pais %s tem uma populacao maior que o pais %s!\n", PAIS2,
             PAIS1);
    } else {
      printf("Os paises %s e %s tem a mesma populacao!\n", PAIS1, PAIS2);
    }
    break;
  case 3:
    printf("Voce escolheu comparar a area!\n");
    printf("A area do pais %s e %.2f\n", PAIS1, AREA1);
    printf("A area do pais %s e %.2f\n", PAIS2, AREA2);
    if (AREA1 > AREA2) {
      printf("O pais %s tem uma area maior que o pais %s!\n", PAIS1, PAIS2);
    } else if (AREA1 < AREA2) {
      printf("O pais %s tem uma area maior que o pais %s!\n", PAIS2, PAIS1);
    } else {
      printf("Os paises %s e %s tem a mesma area!\n", PAIS1, PAIS2);
    }
    break;
    // comparacao de pib per capita
  case 4:
    printf("Voce escolheu comparar o PIB per capita!\n");
    printf("O PIB per capita do pais %s e %.8f\n", PAIS1, PIBPC1);
    printf("O PIB per capita do pais %s e %.8f\n", PAIS2, PIBPC2);
    if (PIBPC1 > PIBPC2) {
      printf("O pais %s tem um PIB per capita maior que o pais %s!\n", PAIS1,
             PAIS2);
    } else if (PIBPC1 < PIBPC2) {
      printf("O pais %s tem um PIB per capita maior que o pais %s!\n", PAIS2,
             PAIS1);
    } else {
      printf("Os paises %s e %s tem o mesmo PIB per capita!\n", PAIS1, PAIS2);
    }
    break;
    // Comparacao do numero de pontos turisticos
  case 5:
    printf("Voce escolheu comparar o numero de pontos turisticos!\n");
    printf("O numero de pontos turisticos do pais %s e %ld\n", PAIS1, NPT1);
    printf("O numero de pontos turisticos do pais %s e %ld\n", PAIS2, NPT2);
    if (NPT1 > NPT2) {
      printf("O pais %s tem mais pontos turisticos que o pais %s!\n", PAIS1,
             PAIS2);
    } else if (NPT1 < NPT2) {
      printf("O pais %s tem mais pontos turisticos que o pais %s!\n", PAIS2,
             PAIS1);
    } else {
      printf("Os paises %s e %s tem o mesmo numero de pontos turisticos!\n",
             PAIS1, PAIS2);
    }
    break;
    // Comparacao do super poder
  case 6:
    printf("Voce escolheu comparar o super poder!\n");
    printf("O super poder do pais %s e %.2f\n", PAIS1, SUPERPODER1);
    printf("O super poder do pais %s e %.2f\n", PAIS2, SUPERPODER2);
    if (SUPERPODER1 > SUPERPODER2) {
      printf("O pais %s tem um super poder maior que o pais %s!\n", PAIS1,
             PAIS2);
    } else if (SUPERPODER1 < SUPERPODER2) {
      printf("O pais %s tem um super poder maior que o pais %s!\n", PAIS2,
             PAIS1);
    } else {
      printf("Os paises %s e %s tem o mesmo super poder!\n", PAIS1, PAIS2);
    }
    break;
  default:
    printf("Opcao invalida!\n");
    break;
  }

  printf("\n\n=== Fim do jogo ===\n");
  printf("Obrigado por jogar!\n");
  printf("Pressione qualquer tecla para sair...\n");
  scanf_s("%s", resposta, sizeof(resposta));

  return 0;
}
// Fim do programa
