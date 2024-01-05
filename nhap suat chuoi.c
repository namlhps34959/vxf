#include<stdio.h>
void nhapham(int a[],int x){
	int i;
	int b=0;
	for(i=0;i<x;i++){
	    printf("nhap a[%d]: ",b);
	    scanf("%d",&a[i]);
		b=b+1;
	}
}
void suatham(int a[],int x){
	int i;
	int b=0;
	for(i=0;i<x;i++){
	printf("so a[%d]: %d\n",b,a[i]);
	b=b+1;}
}
int main(){
    int n;
    printf("nhap n: ");
	scanf("%d",&n);
    int a[n];
	nhapham(a,n);
	suatham(a,n);
}
