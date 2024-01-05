// gia su co tep thisinh.txt luu tru danh sach thi sinh bao gom so bao danh ho&ten diem thi 
// dong dau tien

#include<string.h>
#include<stdio.h>

struct Thisinh{
	char ht[30],sbd[10];
	float diem;
};

int main(){
	int n,i;
	float dc;
	Thisinh *ts;
	FILE *fr,*fw;
	fr=fopen("thisinh.txt","r");
	fscanf(fr,"%d\n",&n);
	ts= new Thisinh[n];
	for(i=0;i<n;i++){
		char s[30];
		fgets(s,10,fr);
		s[strlen(s)-1]='\0';
		strcpy(ts[i].sbd,s);
		fgets(s,30,fr);
		s[strlen(s)-1]='\0';
		strcpy(ts[i].ht,s);
		fscanf(fr,"%f\n",&ts[i].diem);
		printf("so bao danh: %s ho ten: %s diem thi %.2f\n",ts[i].sbd,ts[i].ht,ts[i].diem);
	}
	fclose(fr);
	printf("nhap diem chuan: "); scanf("%f",&dc);
	fw=fopen("dstrungtuyen.txt","w");
	puts("danh sach thi sinh trung tuyen\n");
	fputs("danh sach thi sinh trung tuyen\n",fw);
	for(i=0;i<n;i++){
		if(ts[i].diem>=dc){
			fprintf(fw,"so bao danh: %s ho ten: %s diem thi %.2f\n",ts[i].sbd,ts[i].ht,ts[i].diem);
			printf("so bao danh: %s ho ten: %s diem thi %.2f\n",ts[i].sbd,ts[i].ht,ts[i].diem);	
		}
	}
	fclose(fw);	
}
