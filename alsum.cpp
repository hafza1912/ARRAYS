//print alternate sum of array (arr [0] - arr [1] + arr [2] - arr [3] + arr [4])
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int esum=0,osum=0,alsum=0;
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
			if(i%2==0){
				esum+=arr[i];
			}
			else{
				osum+=arr[i];
			}
	}
	alsum=esum-osum;
	if(alsum<0){
		alsum=-alsum;
	}
	printf("%d",alsum);
	return 0;
}
