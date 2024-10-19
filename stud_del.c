#include"header.h"

extern st *head;
void del_rollno(int);
void del_name();

void stud_del(){
printf("1 :Based on rollno\n2 :Based on name\nEnter your choice:");
int n;
char ch;
scanf(" %c",&ch);
switch(ch){
case '1':
printf("Enter rollno to delete:");
scanf("%d",&n);
del_rollno(n);break;
case '2':del_name();break;
default:printf("Unknown choice\n");
}
}

void del_rollno(int n){
st *del,*prev;
del=head;
while(del){
if(del->rollno==n){
if(del==head)
head=del->next;
else
prev->next=del->next;
free(del);
del=0;
return;
}
prev=del;
del=del->next;
}
printf("Num not found\n");
}

void del_name(){
int n;
char s[25];
st *del,*prev;
printf("Enter name to delete:");
scanf("%s",s);
int c=search_name(s);
if(c==0){
printf("Name not found\n");
return;
}
else if(c>1){
printf("Duplicate records found!\n");
printf("Enter rollno to delete:");
scanf("%d",&n);
del_rollno(n);
}
else{
del=head;
while(del){
if(strcmp(del->name,s)==0){
if(del==head)
head=del->next;
else
prev->next=del->next;
free(del);
return;
}
prev=del;
del=del->next;
}
}
}

int search_name(char *s){
int c=0;
if(head==0){
printf("No records to search\n");
return c;
}
st *cur=head;
while(cur){
if(strcmp(cur->name,s)==0){
c++;
printf("%d %s %f\n",cur->rollno,cur->name,cur->percent);
}
cur=cur->next;
}
return c;
}
