\\vilmar pereira de souza filho 
// 1 carta 
printf("Cadastro da Cidade 1:\n");
printf("População: ");
scanf("%d", &cidade1.populacao);
printf("Área: ");
scanf("%f", &cidade1.area);
printf("PIB: ");
scanf("%f", &cidade1.pib);
printf("Número de pontos turísticos: ");
scanf("%d", &cidade1.pontos_turisticos);

// 2 carta
printf("\nCadastro da Cidade 2:\n");
printf("População: ");
scanf("%d", &cidade2.populacao);
printf("Área: ");
scanf("%f", &cidade2.area);
printf("PIB: ");
scanf("%f", &cidade2.pib);
printf("Número de pontos turísticos: ");
scanf("%d", &cidade2.pontos_turisticos);

// Exibição dos dados cadastrados
printf("\nDados Cadastrados:\n");

printf("\nCidade 1:\n");
printf("População: %d\n", cidade1.populacao);
printf("Área: %.2f km²\n", cidade1.area);
printf("PIB: R$ %,2f bilhões\n", cidade1.pib);
printf("Número de pontos turísticos: %d\n", cidade1.pontos_turísticos);

printf("\nCidade 2:\n");
printf("População: %d\n", cidade2.populacao);
printf("Área: %.2f km²\n", cidade2.area);
printf("PIB: R$ %,2f bilhões\n", cidade2.pib);
printf("Número de pontos turísticos: %d\n", cidade2.pontos_turísticos);

retornar 0;