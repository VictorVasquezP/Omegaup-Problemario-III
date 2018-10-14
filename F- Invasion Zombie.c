#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long rt (long numero);
float r(long numero);
float re(long numero);
float divd(long numero);
int main(int argc, char **argv){
	long obsoleto1, obsoleto2, obsoleto3, numero;
	scanf("%ld %ld %ld %ld", &obsoleto1, &obsoleto2, &obsoleto3, &numero);
	printf("%ld", rt(numero));
	return 0;
}
float re(long numero){
	return r(numero)-1;
}
float r(long numero){
	float raiz1;
	raiz1=powf(2*numero-1, (float)1/(float)2);
	return raiz1;
}
long rt(long numero){
	long ret;
	ret=(long)ceil(divd(numero));
	return ret;
}
float divd(long numero){
	float ret;
	ret=re(numero)/(float)2;
	return ret;
}

