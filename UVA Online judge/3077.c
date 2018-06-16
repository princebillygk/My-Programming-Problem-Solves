#include<stdio.h>
int main(){
    freopen("output.txt","w",stdout);
    int n,x,y;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&y);
        x>=y?printf("MMM BRAINS\n"):printf("NO BRAINS\n");
    }
    return 0;
}