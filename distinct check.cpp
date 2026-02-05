//Check if all elements are distinct
#include<stdio.h>
int main(){
	int i,j;
	int arr[5];
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<i;j++){
			if(arr[i]==arr[j]){
				printf("NOT DISTINCT");
				return 0;
			}
		}
	}
	printf("DISTINCT");
	return 0;
}
