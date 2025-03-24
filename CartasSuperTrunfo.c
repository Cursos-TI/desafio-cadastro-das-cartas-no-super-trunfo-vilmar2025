#include <stdio.h>

   int main (){ 
   //carta1;

    char estado;
    char codigo[3];
    char nome_cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
  
    printf("estado (A-H): ");
    scanf("%c", &estado);

    printf("codigo: ");
    scanf ("%s", &codigo);
    

    printf("Nome da Cidade: ");
    scanf("%s", &nome_cidade);

    printf("populacao: ");
    scanf("%d", &populacao);

    printf("area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    //printf para imprimir resultados 

    printf("o estado é:%c\n" ,estado);

    printf("codigo é:%s\n" ,codigo);
    
    printf("nome da cidade é:%s\n" ,nome_cidade);
   
    printf("a populacao é:%d\n" ,populacao);
    
     printf("area é:%.2f metros km\n",area);
     printf("o PIB é:%f\n" ,pib);
     printf("numeros de pontos turisticos é:%d\n" ,pontos_turisticos);


    ;}