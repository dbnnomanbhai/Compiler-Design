#include <stdio.h>
int main()
 {
	char name[100];
	int marks,i,j;
	printf("Enter number of students: ");
	scanf("%d",&j);
	FILE *fptr;
	fptr=(fopen("E:\\test.txt","a"));
	if(fptr==NULL) {
		printf("error!");
		exit(1);
	}
	for (i=0;i<j;++i) {
		printf("For student%d\n Enter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}
