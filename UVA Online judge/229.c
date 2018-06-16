#include<stdio.h>

int main(){
    int test_case,length,i,j,swap_counter;
    scanf("%d",&test_case);
    while(test_case--){
        swap_counter=0;
        scanf("%d",&length);
        int combination[length];
        for(i=0;i<length;i++)
            scanf("%d",&combination[i]);
        for(i=0;i<length-1;i++)
            for(j=0;j<length-i-1;j++)
                if(combination[j]>combination[j+1]){
                    combination[j]=combination[j]^combination[j+1];
                    combination[j+1]=combination[j]^combination[j+1];
                    combination[j]=combination[j]^combination[j+1];
                    swap_counter++;
                }
        printf("Optimal train swapping takes %d swaps.\n",swap_counter);
    }


    return 0;


}
