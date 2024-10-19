#include"header.h"
extern st *head;
void sort_name();
void sort_percent();

void sort_list(){
char ch;
printf("Enter:\nN/n:sort with name\nP/p:sort with percentage\n");
scanf(" %c",&ch);
switch(ch){
case 'P':
case 'p':sort_percent();break;
case 'n':
case 'N':sort_name();break;
default:printf("Unknown choice:\n");
}
}

void sort_name(){
if(head==0){
printf("No records available\n");
return;
}
st *p=head,*q,*temp;
int c=count_nodes(),i,j;
for(i=0;i<c-1;i++){
q=p->next;
for(j=0;j<c-i-1;j++){
if(strcmp(p->name,q->name)>0){
temp->rollno=p->rollno;
strcpy(temp->name,p->name);
temp->percent=p->percent;

p->rollno=q->rollno;
strcpy(p->name,q->name);
p->percent=q->percent;

q->rollno=temp->rollno;
strcpy(q->name,temp->name);
q->percent=temp->percent;
}
q=q->next;
}
p=p->next;
}
}

void sort_percent(){
if(head==0){
printf("No records available\n");
return;
}
st *p=head,*q,*temp;
int c=count_nodes(),i,j;
for(i=0;i<c-1;i++){
q=p->next;
for(j=0;j<c-i-1;j++){
if(p->percent>q->percent){
temp->rollno=p->rollno;
strcpy(temp->name,p->name);
temp->percent=p->percent;

p->rollno=q->rollno;
strcpy(p->name,q->name);
p->percent=q->percent;

q->rollno=temp->rollno;
strcpy(q->name,temp->name);
q->percent=temp->percent;
}
q=q->next;
}
p=p->next;
}
}
