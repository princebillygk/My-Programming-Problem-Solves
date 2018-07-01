#include<stdio.h>

int main()
{
//    freopen("output.txt","w",stdout);
    int j;
    int test_case, students_number, students_marks,sum;
    scanf("%d",&test_case);
        for(int i=1;i<=test_case;i++){
            scanf("%d",&students_number);
            for(j=0,sum=0;j<students_number;j++){
                scanf("%d",&students_marks);
                sum+=students_marks;
            }
            printf("Case %d: %d\n",i,(int)(sum/students_number));
        }
    return 0;
}

