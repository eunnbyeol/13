#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
		int ID;
		char name[10];
		double grade; 
	};
	
int main(int argc, char *argv[]) {
	struct student s={123456, "Juyeop", 1.200000 };
	
	printf("ID : %d\n", s.ID);
	printf("name : %s\n", s.name);
	printf("grade : %lf\n", s.grade);
	
	
	return 0;
}
