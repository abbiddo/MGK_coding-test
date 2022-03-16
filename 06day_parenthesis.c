#include <stdio.h>
#include <string.h>

void validate_brace_pair(char *arr){
	int size=strlen(arr),cnt=0,i;
	for (i=0;i<size;i++){
		if (arr[i]=='{') cnt++;
		else cnt--;
		if (cnt<0){
			printf("유효하지 않은 중괄호 쌍입니다.\n");
			return;
		}
	}
	if (cnt==0)	printf("유효한 중괄호 쌍입니다.\n");
	else printf("유효하지 않은 중괄호 쌍입니다.\n");
}

int main(){
    validate_brace_pair("{{}}{}");
	validate_brace_pair("{{}");
	validate_brace_pair("{{{}}}");
	validate_brace_pair("}{{{}}}{");
}
