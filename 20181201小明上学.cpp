#include<bits/stdc++.h>
using namespace std;

int main(){

    int r,y,g;
    int N;
    int sum=0;

	scanf("%d%d%d",&r,&y,&g);
	scanf("%d",&N);
	int flag,time;
	for(int i=0;i<N;i++){
		scanf("%d%d",&flag,&time);
		if(flag==0)sum=sum+time;
		else if(flag==1)sum=sum+time;
		else if(flag==2)sum=sum+time+r;

	}
	printf("%d",sum);
	return 0;
}
