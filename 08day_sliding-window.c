#include <stdio.h>
int main(){
	int arr[10][3],i,a,s=0,max=0,k,m;
	for (i=0;i<10;i++){
		scanf("%d %d %d",&a,&arr[i][0],&arr[i][1]);
		arr[i][2]=arr[i][1]-arr[i][0];
	}
	
	while(s<8){
		k=arr[s][2]+arr[s+1][2]+arr[s+2][2];
		if (max<k) {
			max=k;
			m=s;
		}
		s++;
	}
	
	printf("%d %d %d의 타우린 합은%d, 카페인 합은%d로 가장 효과가 좋습니다.",m,m+1,m+2,arr[m][1]+arr[m+1][1]+arr[m+2][1],arr[m][0]+arr[m+1][0]+arr[m+2][0]);
}
