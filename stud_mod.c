#include"header.h"

extern st* head;
void mod_name();
void mod_rollno(int);
void mod_percent();

void stud_mod(){
char ch;
printf("Enter which record to search for modification:\n");
printf("R/r:to search a rollno\nN/n:to search a name\nP/p:percentage based\n");
scanf(" %c",&ch);
int n;
switch(ch){
case 'R':
case 'r':printf("Enter rollno to modify:");
scanf("%d",&n);
mod_rollno(n);break;
case 'N':
case 'n':mod_name();break;
case 'P':
case 'p':mod_percent();break;
default:printf("Unknown choice\n");
}
}

void mod_rollno(int n){
if(head==0){
printf("No records to search\n");
return;
}
st *cur=head;
while(cur){
if(cur->rollno==n){
printf("%d %s %f\n",cur->rollno,cur->name,cur->percent);
printf("Enter new name and percentage:\n");
scanf(" %s%f",cur->name,&cur->percent);
return;
}
cur=cur->next;
}
}

void mod_name(){
if(head==0){
printf("No records found\n");
return;
}
char s[25];
printf("Enter name to modify:");
scanf(" %s",s);
int c=search_name(s),n;
st *cur=head;
if(c>1){
printf("Duplicate records found\nEnter rollno to modify");
scanf("%d",&n);
mod_rollno(n);
}
else{
while(cur){
if(strcmp(cur->name,s)==0){
printf("Enter new name and new percentage:");
scanf("%s%f",cur->name,&cur->percent);
return;
}
cur=cur->next;
}
}
}

void mod_percent(){
if(head==0){
printf("No records to modify\n");
return;
}
float p;
printf("Enter percentage:");
scanf("%f",&p);
int c=0;
st *cur=head;
int n;
while(cur){
if(cur->percent==p){
c++;
printf("%d %s %f\n",cur->rollno,cur->name,cur->percent);
}
cur=cur->next;
}
if(c>1){
printf("Duplicate records found\nEnter rollno to modify:");
scanf("%d",&n);
mod_rollno(n);
}
else{
cur=head;
while(cur){
if(cur->percent==p){
printf("Enter new name and percentage:\n");
scanf(" %s%f",cur->name,&cur->percent);
return;
}
cur=cur->next;
}
}
}

