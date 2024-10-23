#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
int rollno;
char name[25];
float percent;
struct student *next;
}st;

void stud_add();
void stud_show();
void stud_del();
void stud_save();
void stud_mod();
void sort_list();
void delete_all();
void reverse_list();
int search_name(char *);
int count_nodes();
void read_file();
