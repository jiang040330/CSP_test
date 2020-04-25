#include<bits/stdc++.h>
using namespace std;

int r,y,g;
int N;
int sum=0;

int main(){
	scanf("%d%d%d",&r,&y,&g);
	scanf("%d",&N);
	int flag[N],time[N];
	for(int i=0;i<N;i++){
		scanf("%d%d",&flag[i],&time[i]);
		if(flag[i]==0)sum=sum+time[i];
		else if(flag[i]==1)sum=sum+time[i];
		else if(flag[i]==2)sum=sum+time[i]+r;
		
	}
	printf("%d",sum);
	return 0; 
}
