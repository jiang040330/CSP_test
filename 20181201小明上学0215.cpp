#include<bits/stdc++.h>
using namespace std;

int r,y,g;
int N;
int sum=0;
struct ele{
    int flag;
    int time;};

int main(){
	scanf("%d%d%d",&r,&y,&g);
	scanf("%d",&N);
	struct ele a[N];
//	int flag[N],time[N];
	for(int i=0;i<N;i++){
		scanf("%d%d",&a[i].flag,&a[i].time);
		if(a[i].flag==0)sum=sum+a[i].time;
		else if(a[i].flag==1)sum=sum+a[i].time;
		else if(a[i].flag==2)sum=sum+a[i].time+r;

	}
	printf("%d",sum);
	return 0;
}
