#include"header.h"
extern st *head;
extern int c;
void stud_save(){
if(head==0){
printf("No records to save\n");
return;
}
FILE *fp=fopen("student.dat","w");
st *cur=head;
while(cur){
fprintf(fp,"%d %s %f\n",cur->rollno,cur->name,cur->percent);
cur=cur->next;
}
}

void read_file(){
c=0;
st *new,*last;
FILE *fp=fopen("student.dat","r");
if(fp==0)
return;
while(1){
new=(st*)calloc(1,sizeof(st));
if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->percent)==-1){
free(new);
break;
}
if(head==0){
head=new;
}
else{
last=head;
while(last->next)
last=last->next;
last->next=new;
}
c++;
}
fclose(fp);
}
