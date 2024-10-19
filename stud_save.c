#include"header.h"
extern st *head;
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
