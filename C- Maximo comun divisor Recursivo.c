#include <stdio.h>
long mcd(int a, int b);
int main(int argc, char *argv[]) {
	int b,a,t;
	scanf("%d",&a);
	scanf("%d",&b);
	t=mcd(a,b);
	printf("%d",t);
	return 0;
}
long mcd(int a, int b){
	if(b==0){
		return a;
	}else{
		return mcd(b,a%b);
	}
}

