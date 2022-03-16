#include <stdio.h>
#include <math.h>

int n,arr[4000001]={1,1},prime[500],a=1,sum,k=1,kk=0,cnt;

void answer(int n){
	int i,j;
	for (i=2;i<=n;i++){
		if (arr[i]==0){
			prime[a]=prime[a-1]+i;
			a++;
			for (j=2;j*i<=n;j++) arr[i*j]=1;
		}
	}
	
	if (n<4){
		prime[0]=2;
		prime[1]=3;
	}
	
	while(k>=kk && k<=a){
		if (prime[k]-prime[kk]<n) k++;		
		else if (prime[k]-prime[kk]>n)  kk++;
		else {
			printf("연속된 소수 [");
			for (i=kk+1;i<k;i++) printf("%d,",prime[i]-prime[i-1]);
			printf("%d]의 합은 %d입니다.\n",prime[k]-prime[k-1],n); 
			return 0;
		}
	}
	
	printf("연속된 소수의 합으로 %d을 만들 수 없습니다.\n",n);
}

int main(){
	answer(41);
	answer(20);
}
