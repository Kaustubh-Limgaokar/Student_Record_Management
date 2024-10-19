#include"header.h"
extern st *head;
void stud_show(){
if(head==0){
printf("No records available\n");
}
else{
st *last=head;
while(last){
printf("%d %s %lf\n",last->rollno,last->name,last->percent);
last=last->next;
}
}
printf("\n");
}
