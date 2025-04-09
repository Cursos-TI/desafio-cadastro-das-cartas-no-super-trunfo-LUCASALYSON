#include <stdio.h>

int main(){
// variaveis da carta do jogo trunfo;
//Carta 02
char codigo02 [4] = "A01";
char estado02 = 'A';
char cidade02 [50]; 
int populacao02;
float AreaKM02;
float PIB02;
int numerosdepontosturisticos02;

printf("Digite o codigo da carta:\n");
scanf("%s", &codigo02);

printf("Digite o seu estado:\n");
scanf("%s", &estado02);

printf("Digite sua cidade:\n");
scanf("%s", &cidade02);

printf("Digite a quantidade populacional:\n");
scanf("%d", &populacao02);

printf("Digite a areaKM²:\n");
scanf("%f", AreaKM02);

printf("Digite o PIB:\n");
scanf("%f", &PIB02);

printf("Digite o numero de pontos Turisticos:\n");
scanf("%d", &numerosdepontosturisticos02);



return 0;



}
