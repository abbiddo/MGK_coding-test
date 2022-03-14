#include <stdio.h>
int main(){
    int arr[]={9,6,7,3,5};
    int min,temp,i,j;
    
    for (i=0;i<5;i++){
    	min=i;
    	for (j=i;j<5;j++){
    		if (arr[min]>arr[j]) min=j;
		}
		if (min!=i){
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
			for (j=0;j<5;j++) printf("%d ",arr[j]);
			printf("\n");
		}	
	}
}
