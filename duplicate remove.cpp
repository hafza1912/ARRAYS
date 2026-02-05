//Remove duplicates from sorted array and count no.of unique elements
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);//get sorted array from user
	}
	int temp=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[i-1]){
			arr[temp]=arr[i];
			temp++;
		}
	}
	printf("%d",temp);
	return 0;
}
