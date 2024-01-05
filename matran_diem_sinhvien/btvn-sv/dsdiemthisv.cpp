// btvn Nguyen Van An's exercises
#include<stdio.h>
#include<math.h>
#include<string.h>

struct thisinh{
	char ht[30];
	char msv[10];
	float diem;
};

int main(){
	int i,n,j;
	float dc;
	thisinh *ts;
	FILE *fr, *fw;
	fr=fopen("diem-sinh-vien.txt","r");
	fscanf(fr,"%d\n",&n);
	ts = new thisinh[n];
	for(i=0;i<n;i++){
		char s[30];
		fgets(s,10,fr);
		s[strlen(s)-1]=' ';
		strcpy(ts[i].msv,s);
		fgets(s,30,fr);
		s[strlen(s)-1]=' ';
		strcpy(ts[i].ht,s);
		fscanf(fr,"%f\n",&ts[i].diem);
		printf("ma sinh vien: %s ho ten: %s diem thi: %.2f\n",ts[i].msv,ts[i].ht,ts[i].diem);
		
		
	}
	fclose(fr);
	printf("\n--------------------------------------------------\n");
	
	// cau 1.1
	printf("thi sinh co diem cao la: \n");
	for(i=0;i<n;i++){
		if(ts[i].diem>=5){
			fprintf(fw,"msv: %s,ho ten thi sinh: %s, diem thi %.2f\n",ts[i].msv,ts[i].ht,ts[i].diem);
			printf("msv: %s,ho ten thi sinh: %s, diem thi %.2f\n",ts[i].msv,ts[i].ht,ts[i].diem);
		} 
	}
	printf("\n--------------------------------------------------\n");
//	
	// cau 1.2
	fprintf(fw,"Sinh vien hoc lai la: \n");
	printf("Sinh vien hoc lai la: \n");
	for(i=0;i<n;i++){
		if(ts[i].diem<5){
			fprintf(fw,"msv: %s,hoten: %s,diem: %.2f\n",ts[i].msv,ts[i].ht,ts[i].diem);
			printf("msv: %s,hoten: %s,diem: %.2f\n",ts[i].msv,ts[i].ht,ts[i].diem);
		}	
	}
	printf("\n--------------------------------------------------\n");
	//cau 1.3// btvn Nguyen Van An's exercises
	
	puts("Danh sach sinh vien sap xep theo thu tu tang dan: \n");
	fputs("Danh sach sinh vien sap xep theo thu tu tang dan: \n",fw);
	thisinh t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(ts[i].diem>ts[j].diem){
				t = ts[i];
				ts[i]=ts[j];
				ts[j]= t;
			}
		}
		printf("msv: %s,hoten: %s,diem: %.2f\n",ts[i].msv,ts[i].ht,ts[i].diem);
		fprintf(fw,"msv: %s,hoten: %s,diem: %.2f\n",ts[i].msv,ts[i].ht,ts[i].diem);	
	}

	fclose(fw);
//	
}

































// btvn Nguyen Van An's exercises
