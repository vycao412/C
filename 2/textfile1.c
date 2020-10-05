#include <stdio.h>
#include <string.h>

int exist(char* filename) {
	int existed=0;
	/* Try opening it for reading*/
	FILE* f=fopen(filename, "r");
	if(f!=NULL) {
		existed=1;
		fclose(f);
	}
	return existed;
}

int writeFile(char* filename) {
	if(exist(filename)==1) {
		printf("The file %s existed. Override it Y/N? :", filename);
		if(toupper(getchar())=='N') return 0;
	}
	char line[201]; //inputted string
	int length=0; //length if inputted line
	//open the file for writing
	FILE* f=fopen(filename,"w");
	fflush(stdin);
	do {
		gets(line); //get a line - if user presses ENTER only --> length=0
		length=strlen(line);
		if(length>0) {
			fputs(line,f); //Write the line to file
			//fputs() does not write the new line mark automatically
			fputs("\n",f);
		}
	} while(length>0);
	fclose(f);
	return 1;
}

// Print out the content of a text file to the monitor
int printFile(char* filename) {
	char c; //inputted character
	if(exist(filename)==0) {
		printf("The file %s does not exist.\n", filename);
		return 0;
	}
	//open the file for reading
	FILE* f=fopen(filename, "r");
//When data can be read from the file to variable, process variable
	while((c=fgetc(f))!=EOF) putchar(c);
	fclose(f);
	return 1;
}

int main(int argCount, char* args[]) {
	char filename[81];
	printf("Program for writing then reading a file\n");
	printf("Enter a filename: ");
	gets(filename);
	printf("Write file:\n");
	if(writeFile(filename)==1) {
		printf("Data in the file %s:\n", filename);
		if(printFile(filename)==0) printf("File error!\n");
	} else printf("Writing file fail!\n", filename);
	getchar();
	return 0;
}


