#include"header.h"
extern int c;
extern st *head;
void stud_add(){
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
