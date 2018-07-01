
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[6][6],i,j,big=-100,sum=0;
    for(i = 0; i < 6; i++){
       for(j = 0; j < 6; j++){
          scanf("%d",&a[i][j]);
       }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum+=a[i][j]+a[i][j+1]+a[i][j+2];
            sum+=a[i+1][j+1];
            sum+=a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>big){
                big=sum;
            }
            sum=0;

        }
    }

    printf("%d",big);

    return 0;
}
