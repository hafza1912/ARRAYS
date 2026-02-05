//Check if an array contains duplicates
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
				printf("Contains duplicate");
				return 0;
			}
		}
	}
	printf("No Duplicates");
	return 0;
}
