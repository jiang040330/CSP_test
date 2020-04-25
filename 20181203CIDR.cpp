#include <bits/stdc++.h>
using namespace std;

string s;
int N;
int main(){
	cin>>N;
	int a[N][5],ans[5];
	int temp;
	int k,only_num;
	memset(a,0,sizeof(a));

	for(int i=0;i<N;i++){
		cin>>s;
		k=0;
		only_num=1;
		if(s[0]=='0'){
			printf("0.0.0.0/0\n");continue;}
		for(int j=0;j<s.size();j++){
			temp=0;
			while(s[j]!='.' && s[j]!='/' && j<s.size()){
				if(s[j]=='.'||s[j]=='/'){only_num=0;}
				temp=s[j]-'0'+temp*10;
				j++;			
			}

			if(j==s.size())
				{a[i][4]=temp;break;}
			
			if(s[j-1]!='.' || s[j-1]!='/' ){
				a[i][k]=temp;
				k++;
			}	
			
		}
		if(only_num==0){
			a[i][0]=temp;}
		for(k=0;k<3;k++)cout<<a[i][k]<<".";
		cout<<a[i][3]<<'/'<<a[i][4]<<endl;
		
	}
	for(int i=0;i<N;i++){
		
	}
	cin>>k;
	return 0;
}
