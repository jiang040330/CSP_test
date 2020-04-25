#include<bits/stdc++.h>
using namespace std;

long long r,y,g;
long long N;
long long sum=0;
struct ele{
    int flag;
    long long  chu;
    long long  time=0;};

int main(){
	scanf("%lld%lld%lld",&r,&y,&g);
	long long  x=r+y+g;
	scanf("%lld",&N);
	struct ele a[N];
//	int flag[N],time[N];
	for(int i=0;i<N;i++){
		scanf("%lld%lld",&a[i].flag,&a[i].chu);
		if(a[i].flag==1)
            a[i].chu=r-a[i].chu;
        else if(a[i].flag==2)
            a[i].chu=r+y+g-a[i].chu;
        else if(a[i].flag==3)
            a[i].chu=r+g-a[i].chu;
//      cout<<a[i].flag<<' '<<a[i].time<<endl;

	}
	for(int i=0;i<N;i++){


        for(int j=i;j<N;j++){
                if(a[j].flag!=0){
                    a[j].time = (a[j].chu+sum)%x;
                    if(a[j].time<r)a[j].flag=1;
                    else if(a[j].time<r+g)a[j].flag=3;
                    else if(a[j].time<r+y+g)a[j].flag=2;
                }

//                cout<<a[j].flag<<' '<<a[j].time<<endl;
            }
        if(a[i].flag==0)sum=sum+a[i].chu;
        else if(a[i].flag==1)sum=sum+r-a[i].time;
        else if(a[i].flag==2)sum=sum+x+r-a[i].time;
//    printf("%d \n",sum);
	}
	printf("%lld",sum);
	return 0;
}
