# include <stdio.h>
# include <math.h>

int main()
{
    int i=1;
    double diagonals;
    while(scanf("%lf",&diagonals)!=EOF){
        if(diagonals==0)
            break;
        printf("Case %d: %.0lf\n",i,ceil((3+sqrt(9+8*diagonals))/2));
        i++;
    }
    return 0;
}
