#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void mz(int A[],int l,int m,int r);
void od(int A[],int lo,int hi);
int main(){
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++)scanf("%d",&A[i]);
	od(A,0,n-1);
	
	for(int i=0;i<n;i++)printf("%d",A[i]);
	return 0;
}
void od(int A[],int lo,int hi){
	if(lo<hi){
		int m = lo + (hi-lo)/2;
		od(A,lo,m);
		od(A,m+1,hi);
		mz(A,lo,m,hi);
	}
}
void mz(int A[],int l,int m,int r){
	int n1 = m - l + 1;
	int n2 = r-m;
	int L[n1];
	int R[n1];
	for(int i=0;i<n1;i++){
		L[i] = A[l+i];
	}
	for(int i=0;i<n2;i++){
		R[i] = A[m+1+i];
	}
	int a = 0;
	int b = n2-1;
	int k = l;
	
	while(a <n1 && b>=0){
		if(L[a] <= R[b]){
			A[k] = L[a];
			a++;
		}
		else{
			A[k] = R[b];
			b--;
		}
		k++;
	}
	while(a<n1){
		A[k] = L[a];
		a++;
		k++;
	}
	while(b>=0){
		A[k] = R[b];
		b--;
		k++;
	}
}

