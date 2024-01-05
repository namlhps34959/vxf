#include<stdio.h>
void nhapham(int a[][1],int x,int y){
	int i,j;
	for(i=0;i<x;i++){
	    for(j=0;j<y;j++){
		    printf("nhap a[%d][%d]: ",i,j);
	        scanf("%d",&a[i][j]);
		}
	}
}
void suatham(int a[][1],int x,int y){
	int i,j;
	for(i=0;i<x;i++){
	    for(j=0;j<y;j++){
	        printf("so a[%d][%d]: %d\n",i,j,a[i][j]);
	}}
}
int main(){
    int n,m;
    printf("nhap n: ");
	scanf("%d",&n);
    printf("nhap m: ");
	scanf("%d",&m);
	int a[n][m];
	nhapham(a,n, m);
	suatham(a,n, m);
}
