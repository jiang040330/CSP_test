#include<bits/stdc++.h>
using namespace std;

int r,y,g;
int N;
long long sum=0;

int main(){
	scanf("%lld%lld%lld",&r,&y,&g);
	scanf("%lld",&N);
	long long flag[N],time[N],a[N];
	for(int i=0;i<N;i++){
		scanf("%lld%lld",&flag[i],&time[i]);

		if(flag[i]==1)a[i]=time[i]=r-time[i];
		else if(flag[i]==2)a[i]=time[i]=r+y+g-time[i];
		else if(flag[i]==3)a[i]=time[i]=r+g-time[i];
		if(flag[i])time[i]=(a[i]+sum)%(r+y+g);
		if(flag[i]==0)sum=sum+time[i];
		else if(flag[i]&&(time[i]<r))sum=sum+r-time[i];
		else if(flag[i]&&(time[i]>=r+g))sum=sum+r*2+y+g-time[i];

	}
	printf("%lld",sum);
	return 0;
}
