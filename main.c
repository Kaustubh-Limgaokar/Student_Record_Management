#include"header.h"
int c;
st *head;
char flag;
void main(){
char ch;
while(1){
printf("*****STUDENT RECORD MENU*****\n\n");
printf("a/A :add new record\nd/D :delete a record\ns/S :show the list\nm/M :modify a record\n");
printf("v/V :save\ne/E :exit\nt/T :sort the list\nl/L :delete all the records\n");
printf("r/R :reverse the list\n\nEnter your choice:");
scanf(" %c",&ch);
switch(ch){
case 'a':
case 'A':stud_add();break;
case 'd':
case 'D':if(head==0){
printf("No records to delete\n");
break;
}
else{
stud_del();
break;
}
case 's':
case 'S':stud_show();break;
case 'm':
case 'M':stud_mod();break;
case 'v':
case 'V':stud_save();break;
case 'e':
case 'E':printf("S/s :save and exit\nE/e :exit without saving\n");
scanf(" %c",&ch);
switch(ch){
case 'S':
case 's':stud_save();exit(0);
case 'e':
case 'E':exit(0);
}
break;
case 't':
case 'T':sort_list();break;
case 'l':
case 'L':delete_all();break;
case 'r':
case 'R':reverse_list();break;
default:printf("Unknown choice!!\n");
}
}
}

void delete_all(){
if(head==0){
printf("No records to delete\n");
return;
}
st *del=head;
while(del){
head=del->next;
free(del);
del=head;
}
printf("All records deleted\n");
}

int count_nodes(){
int c;
if(head==0){
printf("No records available\n");
return c;
}
st *cur=head;
while(cur){
c++;
cur=cur->next;
}
return c;
}

void reverse_list(){
if(head==0){
printf("No records available\n");
return;
}
int c=count_nodes();
st **arr,*t=head;
arr=(st **)calloc(c,sizeof(st *));
int i=0;
while(t){
arr[i++]=t;
t=t->next;
}
for(i=1;i<c;i++)
arr[i]->next=arr[i-1];
arr[0]->next=0;
head=arr[c-1];
}
