#include<stdio.h>
#include<math.h>
int main(){
    int current_channel,next_channel,probabilty_1,probabilty_2;
    while(1){
        scanf("%d %d",&current_channel,&next_channel);
        if(current_channel==-1 && next_channel==-1)
            break;

        if(current_channel==next_channel)
            printf("0\n");

        else if(current_channel>next_channel){
            probabilty_1=100-current_channel+next_channel;
            probabilty_2=current_channel-next_channel;
            if(probabilty_1<probabilty_2)
                printf("%d\n",probabilty_1);
            else
                printf("%d\n",probabilty_2);

        }

        else{
            probabilty_1=100-next_channel+current_channel;
            probabilty_2=next_channel-current_channel;
            if(probabilty_1<probabilty_2)
                printf("%d\n",probabilty_1);
            else
                printf("%d\n",probabilty_2);
        }
    }
    return 0;
}
