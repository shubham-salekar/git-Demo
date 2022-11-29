
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct movie{

	int count;
	char mName[20];
	float imdb;
	struct movie *next;
};
void accessData(struct movie *ptr){

	printf("%d\n",ptr->count);
	printf("%s\n",ptr->mName);
	printf("%f\n",ptr->imdb);
	printf("%p\n",ptr->next);

}
void main(){

	struct movie *m1 = (struct movie*)malloc(sizeof(struct movie));
	struct movie *m2 = (struct movie*)malloc(sizeof(struct movie));
	struct movie *m3 = (struct movie*)malloc(sizeof(struct movie));

	m1->count = 4;
	strcpy(m1->mName,"DDLJ");
	m1->imdb = 9.7;
	m1->next = m2;
	
	m2->count = 5;
	strcpy(m2->mName,"hum 7 8 he");
	m2->imdb = 8.6;
	m2->next = m3;
	
	m3->count = 3;
	strcpy(m3->mName,"surywansham");
	m3->imdb = 8.6;
	m3->next = 0;

	accessData(m1);
	accessData(m2);
	accessData(m3);
}
