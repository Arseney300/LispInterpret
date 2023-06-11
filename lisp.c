#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include <readline/readline.h>
#include <readline/history.h>

#define PROMPT "swlisp>"

char* READ(char prompt_string[]){
	char *read_line;
	read_line = readline(prompt_string);
	if(!read_line)
		return NULL;
	add_history(read_line);
	return read_line;
}

char* EVAL(char string[]){
	return string;
}

char* PRINT(char string[]){
	return string;
}
 

/*
	TODO: 
	1) add SIGINT handler
*/

int main(int argc, char **argv){

	char *line, *exp;

	for(;;){
		line = READ(PROMPT);
		if(!line) break;
		if(line[0]=='\0') continue;
		exp = EVAL(line);
		printf("%s\n",PRINT(exp)); //maybe puts(..) better?

		free(exp);
	}

	return 0;
}

