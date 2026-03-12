#include <stdio.h>

int main(){
    int nums[6];
    int num;

    for (int i=0; i<6;i++){
        scanf("%d", &num);
        nums[i] = num;
        };

    for (int ii=0; ii<6;ii++){
        printf("%d", nums[ii]);
    };

    return 0;
}
