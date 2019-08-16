#include<cstdio>
#include<iostream>
using namespace std;

char mapper[30][30];
bool visit[30][30];
int w, h, path;

void countPath(int, int);

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int x,y;
	while(scanf("%d %d",&w,&h),(w and h)){
		path=0;
		for(int row=0;row<h;row++){
			scanf("%s",mapper[row]);
			for(int col=0;col<w;col++){
				if(mapper[row][col]=='@'){
					x=col; 
					y=row;
				}
				visit[row][col]=0;
			}
		}
		//cout<<x<<" "<<y<<endl;
		countPath(x,y);
		/*
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				printf("(%d,%d) %c  ",j,i, mapper[i][j]);
			}
			printf("\n");
		}
		//*/
		printf("%d\n",path);
	}
	return 0;
}

void countPath(int x, int y){
	//cout<<x<<" "<<y<<endl;
	//cout<<mapper[x][y]<<endl;
	if(
		(x<0 or x>=w or y<0 or y>=h) or 
		mapper[y][x]=='#' or
		visit[y][x]
		){
		//printf("false\n");
		return;
	}
		
	path++;
	//printf("true\n");
	visit[y][x]=1;
	countPath(x-1,y); //cout<<endl;
	countPath(x+1,y); //cout<<endl;
	countPath(x,y-1); //cout<<endl;
	countPath(x,y+1); //cout<<endl;
	
}
