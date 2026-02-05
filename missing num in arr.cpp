//Find the missing number from 1 to n
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);	
	int orgsum=0;
	for(int i=0;i<=n;i++){
		orgsum+=i;
    } 
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	int mnum;
	mnum=orgsum-sum;
	printf("%d",mnum);
	return 0;
}
