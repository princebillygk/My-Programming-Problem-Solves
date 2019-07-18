#include<bits/stdc++.h>
using namespace std;

unsigned long long* player = new unsigned long long[1000000];

int main(){
    //*/
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    //*/
    int nCase,nPlayer,nShift,nRoll,square[102],startpoint,endpoint;
    /*
    * nCase     :store the number of test case
    * nPlayer   :store the number of player
    * nShift    :hold the number of ladders/snake
    * square[]  :shifiting array (ladder/snake shift)
    * startpoint:indicate the mouth of a snake ot bottom of a ladder
    * endpotint :indicate the tail of a snaki or top of a ladder
    * 
    */
    //player vector  :for holding thier position
    int cplayer,roll;
    /*
    * cplayer   : indicate index of currrent player
    * roll      :indicate current roll
    */
    scanf("%d",&nCase);
    while(nCase--){
        scanf("%d %d %d",&nPlayer,&nShift,&nRoll);
        for(int i=0;i<nPlayer;i++){
            player[i]=1;  //all players initial postion is 1
        }
        for(int i=1;i<=101;i++){
            square[i]=0; 
            //assuming their is no shifting in intial state
        }
        while(nShift--){
            scanf("%d %d",&startpoint,&endpoint);
            square[startpoint]=endpoint;
            //startpoint to endpoint shifting array
        }

        cplayer=0; //initial state of cplayer index
        while(nRoll--){
            scanf("%d",&roll);
            //input current roll
            if(cplayer==nPlayer) cplayer=0;
            //if all players have finished start from first index again
            player[cplayer]+=roll;
            //assigning position of current player
            if (square[player[cplayer]]!=0 && player[cplayer]<101){
                //check if thier is shift in current postion
                player[cplayer]=square[player[cplayer]];
                //then shift
            }
            //cout<<"Stat: "<<player[cplayer]<<endl;;
            cplayer++; //updating current player index
        }

        for(int i=0;i<nPlayer;i++){
            if(player[i]>100) player[i]=100;
            printf("Position of player %d is %llu.\n", i+1, player[i] );
        }

    }
    return 0;
}