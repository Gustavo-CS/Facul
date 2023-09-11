#include <stdio.h>

int main() {
    int hora;
    int minutos;
    int resultado;
    printf("que horas são (só as horas): ");
    scanf("%d", &hora);
    printf("quantos minutos são (só os minutos): ");
    scanf("%d", &minutos);
    resultado = (hora * 60) + minutos;
    printf("ja se passaram %.d minutos desde o inicio do dia", resultado);
}