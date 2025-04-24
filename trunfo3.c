#include <stdio.h>

int main(){
// variaveis da carta do jogo trunfo;
//Carta 01
char codigo01 [4] = "A01";
char estado01 = 'A';
char cidade01 [50]; 
int populacao01;
float AreaKM01;
float PIB01;
int Numerosdepontosturisticos01;
float Densidadepopulacional01;
float PIBperCapita01;

float resultado1;

printf("Digite o codigo da carta:\n");
scanf("%s", &codigo01);

printf("Digite o seu estado:\n");
scanf("%s", &estado01);

printf("Digite sua cidade:\n");
scanf("%s", &cidade01);

printf("Digite a quantidade populacional:\n");
scanf("%d", &populacao01);

printf("Digite a areaKM²:\n");
scanf("%f", &AreaKM01);

printf("Digite o PIB:\n");
scanf("%f", &PIB01);

printf("Digite o numero de pontos Turisticos:\n");
scanf("%d", &Numerosdepontosturisticos01);



Densidadepopulacional01 = (populacao01 / AreaKM01);
PIBperCapita01 = (PIB01 / populacao01);

resultado1= (populacao01 + AreaKM01 + PIB01 + Numerosdepontosturisticos01);



printf("A densidade populacional é: %.2f\n",Densidadepopulacional01);
printf(" O PIBpercapita é: %.2f\n",PIBperCapita01);

printf("resultado total: %.2f\n", resultado1);



return 0;



}