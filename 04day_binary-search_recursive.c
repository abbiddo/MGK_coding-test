#include <stdio.h>
int arr[11]={0,1,2,3,4,5,6,7,8,9,10};

int search(int s, int e, int n){	
	if (s>e) return -1;
	
	int m=(s+e)/2;
	
	if (arr[m]>n) search(m+1,e,n);
	else if (arr[m]<n) search(s,m-1,n);
	else return m;
}

int main(){
    printf("%d",search(0,11,5));
}
