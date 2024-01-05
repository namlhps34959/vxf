#include<stdio.h>
typedef struct{
	char MSSV[50];
	char tenSV[50];
	char nganhhoc[50];
	float tb;
}SV;

void nhap(SV *sv){
	printf("\nnhap ma so sv: ");
	scanf("%s",&sv->MSSV);
	printf("nhap ten sv: ");
	fflush(stdin);
	gets(sv->tenSV);
	printf("nhap nganh hoc: ");
	fflush(stdin);
	gets(sv->nganhhoc);
	printf("nhap diem trung binh: ");
	scanf("%f",&sv->tb);
}

void suat(SV sv){
	printf("\nThong tin sinh vien'sv'");
	printf("\nMa so SV: %s",sv.MSSV);
	printf("\nHo ten SV: %s",sv.tenSV);
	printf("\nNganh hoc: %s",sv.nganhhoc);
	printf("\nDiem trung binh cac mon: %0.2f\n",sv.tb);
}

int main(){
    int i,n;
	printf("nhap so luong SV: ");
	scanf("%d",&n);
    SV sv[n];
	for(i=0;i<n;i++){
		nhap(&sv[i]);
	}
	for(i=0;i<n;i++){
		suat(sv[i]);
	}
}
