#include<stdio.h>

int main(){
//    freopen("output.txt","w",stdout);
    int n,student_number,i,sum,good_students;
    float average_grade,average_good;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&student_number);
        int students_grade[student_number];
        for(sum=0,i=0;i<student_number;i++){
            scanf("%d",&students_grade[i]);
            sum+=students_grade[i];
        }
        average_grade=(float)sum/(float)student_number;
        for(good_students=0,i=0;i<student_number;i++){
            if(students_grade[i]>average_grade)
                good_students++;
        }
        average_good=(float)good_students/(float)student_number*100;
        printf("%.3f%%\n",average_good);
    }
    return 0;
}
