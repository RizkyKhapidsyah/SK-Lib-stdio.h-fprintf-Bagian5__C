#pragma warning(disable:4996)

#include <stdio.h>
#include <process.h>
#include <conio.h>

/*
	Source by Microsoft
	Modified For Learn by RK
	I.D.E : VS2019
*/

FILE* stream;

int main(void) {
	int    i = 10;
	double fp = 1.5;
	char   s[] = "this is a string";
	char   c = '\n';

	fopen_s(&stream, "fprintf.out", "w");
	fprintf(stream, "%s%c", s, c);
	fprintf(stream, "%d\n", i);
	fprintf(stream, "%f\n", fp);
	fclose(stream);
	system("type fprintf.out");

	_getch();
	return 0;
}