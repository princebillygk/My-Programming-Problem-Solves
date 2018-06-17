#include<stdio.h>
int main(){
//    freopen("output.txt","w",stdout);
    int n,fbr,tbr,fail;
    char a,c[129];

    scanf("%d",&n);
    getchar();
    while(n--){
        fbr=0;tbr=0;fail=0;
        while((a=getchar())!='\n'){
            if(a=='(')
                fbr++;
            else if(a=='[')
                tbr++;
            else if(a==')' && fbr!=0)
                fbr--;
            else if(a==']' && tbr!=0)
                tbr--;
            else if(a==')'){
                fail++;

            }
            else if(a==']'){
                fail++;
            }
        }
        if(fbr==0 && tbr==0 && fail==0)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}



