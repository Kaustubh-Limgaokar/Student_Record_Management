#include"header.h"
extern int c;
extern st *head;
char flag;
void stud_add(){
if(flag==0){
read_file();
flag^=1;
}
st *new,*last;
new=(st *)calloc(1,sizeof(st));
printf("Enter name and percentage:\n");
scanf("%s%f",new->name,&new->percent);
c++;
new->rollno=c;
if(head==0)
head=new;
else{
last=head;
while(last->next)
last=last->next;
last->next=new;
}
}
