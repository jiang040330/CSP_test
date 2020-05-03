#include<bits/stdc++.h>
using namespace std;

int r,y,g;
int N;
long long sum=0;

int main(){
	scanf("%lld%lld%lld",&r,&y,&g);
	scanf("%lld",&N);
	long long flag,time,a;
	for(int i=0;i<N;i++){
		scanf("%lld%lld",&flag,&time);

		if(flag==1)a=time=r-time;
		else if(flag==2)a=time=r+y+g-time;
		else if(flag==3)a=time=r+g-time;
		if(flag)time=(a+sum)%(r+y+g);
		if(flag==0)sum=sum+time;
		else if(flag&&(time<r))sum=sum+r-time;
		else if(flag&&(time>=r+g))sum=sum+r*2+y+g-time;

	}
	printf("%lld",sum);
	return 0;
}
