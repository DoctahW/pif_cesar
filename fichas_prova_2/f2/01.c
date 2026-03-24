#include <stdio.h>

void estatisticas(float *temp, int len, float *media, float *max, float *min);

int main() {
    float temp[] = {36.5, 38.1, 35.0, 37.4};
    int len = 4;
    float media, max, min;
    estatisticas(temp, len, &media, &max, &min);
    printf("Media: %.2f, Max: %.2f, Min: %.2f\n", media, max, min);
    return 0;
}

void estatisticas(float *temp, int len, float *media, float *max, float *min) {
    float sum = 0;
    for (int i=0;i<len;i++) {
        sum += *(temp + i);
        if (i == 0){
            *max = *temp;
            *min = *temp;
            sum = *temp;
        }
        if (*(temp + i) > *max){
            *max = *(temp + i);
        }
        if (*(temp + i) < *min){
            *min = *(temp + i);
        }
    }
    *media = sum / len;
}
