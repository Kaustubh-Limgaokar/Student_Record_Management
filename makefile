CC=gcc
student: 
	$(CC) main.c stud_add.c stud_del.c stud_save.c stud_show.c stud_mod.c sort_list.c -o student
clean:
	rm student
