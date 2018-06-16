#include<stdio.h>

int main(){
    char ch[31];
    int i;
    while(scanf("%s",ch)!=EOF){
        for(i=0;ch[i]!='\0';i++){
            switch(ch[i]){
                case '1': putchar('1'); break;
                case '0': putchar('0'); break;
                case '-': putchar('-'); break;

                case 'A':
                case 'B':
                case 'C': putchar('2'); break;

                case 'D':
                case 'E':
                case 'F': putchar('3'); break;

                case 'G':
                case 'H':
                case 'I': putchar('4'); break;

                case 'J':
                case 'K':
                case 'L': putchar('5'); break;

                case 'M':
                case 'N':
                case 'O': putchar('6'); break;

                case 'P':
                case 'Q':
                case 'R':
                case 'S': putchar('7'); break;

                case 'T':
                case 'U':
                case 'V': putchar('8'); break;

                case 'W':
                case 'X':
                case 'Y':
                case 'Z': putchar('9'); break;
            }
        }
        putchar('\n');
    }
    return 0;
}
