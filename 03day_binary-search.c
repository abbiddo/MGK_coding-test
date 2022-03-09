#include <stdio.h>
int n,h,ma;
int arr[10001]={0};

int search(int e){
	long long s=0, m=0;
	long long sum=0;
	
	while(s<=e){
		sum=0;
		m=(s+e)/2;
		
		if (m==0) m++;
		
		for (int i=n-1;i>=0;i--)
			sum+=arr[i]/m;
		
		if (sum>=h) s=m+1;
		else if (sum<h) e=m-1;
	}
	return e;
}

int main(){
    scanf("%d %d",&n,&h);
	
	for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if (ma<arr[i]) ma=arr[i];
    }
	printf("%d",search(ma));
}
