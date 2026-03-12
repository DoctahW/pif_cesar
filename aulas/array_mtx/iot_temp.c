#include <stdio.h>


int limiteTemperaturaAlerta = 30;

void verificarTemperatura(int temperaturaAtual, int idSensor);
void ajustarLimiteGlobal(int novoLimite);
int ajustarTemperatura(int temperaturaAtual, int idSensor);


int main() {
    int tempSala = 25;
    int tempServidor = 35;

    printf("--- INICIANDO SISTEMA DE MONITORAMENTO ---\n");
    printf("Limite global atual para alertas: %d graus.\n\n", limiteTemperaturaAlerta);

    verificarTemperatura(tempSala, 1);
    verificarTemperatura(tempServidor, 2);

    tempSala = ajustarTemperatura(tempSala, 1);
    tempServidor = ajustarTemperatura(tempServidor, 2);

    printf("\n--- REAVALIANDO SENSORES ---\n");
    verificarTemperatura(tempSala, 1);
    verificarTemperatura(tempServidor, 2);

    return 0;
}

void verificarTemperatura(int temperaturaAtual, int idSensor) {
    int diferenca;

    if (temperaturaAtual > limiteTemperaturaAlerta) {
        diferenca = temperaturaAtual - limiteTemperaturaAlerta;
        printf("[ALERTA] Sensor %d: %d graus! Excedeu o limite global em %d graus.\n",
               idSensor, temperaturaAtual, diferenca);
    } else {
        printf("[ OK ] Sensor %d: %d graus. Dentro do limite global.\n",
               idSensor, temperaturaAtual);
    }
}

void ajustarLimiteGlobal(int novoLimite) {
    limiteTemperaturaAlerta = novoLimite;
    printf(">>> O limite global de alerta foi alterado para %d graus <<<\n", limiteTemperaturaAlerta);
}

int ajustarTemperatura(int temperaturaAtual, int idSensor){
    if (temperaturaAtual > limiteTemperaturaAlerta){
        temperaturaAtual = limiteTemperaturaAlerta;
        printf("\n--- NOVA TEMPERATURA = %d ---\n", temperaturaAtual);
        return temperaturaAtual;
    }
    return temperaturaAtual;
}
