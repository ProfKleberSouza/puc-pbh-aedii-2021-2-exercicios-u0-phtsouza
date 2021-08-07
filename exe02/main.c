#include <stdio.h> 
/*
Programa feito para calcular a distancia e o combustivel gasto durante uma viagem.
Entrada: Tempo de viagem, velocidade media e rendimento medio do automovel.
Saida: Todos os itens passado pelo usuario, mais a distancia e a quantidade de combustível gasto.
*/
int main(){

    float tempoViagem, velocidadeMedia, rendimentoMedio;
    float distancia = 0;
    float combustivelGasto = 0;

    
    // printf("\nInforme o tempo de viagem em horas: ");
    scanf("%f", &tempoViagem);

    // printf("\nInforme a velocidade media do carro durante a viagem: ");
    scanf("%f", &velocidadeMedia);

    // printf("\nInforme o rendimento medio de combustivel do veiculo: ");
    scanf("%f", &rendimentoMedio);

    distancia = velocidadeMedia * tempoViagem; // Formula para calcular a distancia
    combustivelGasto = distancia/rendimentoMedio; // Formula para calcular o combustivel gasto.

    printf("\nR = %.2f", rendimentoMedio);
    printf("\nV = %.2f", velocidadeMedia);
    printf("\nT = %.2f", tempoViagem);
    printf("\nD = %.2f", distancia);
    printf("\nL = %.2f", combustivelGasto);
}