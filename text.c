/* Simple function file to
 * manipulate text files
 */

#include <stdio.h>

void clean(char *file){
	FILE *pointer;
	pointer = fopen(file, "w");
	fprintf(pointer, "");
	fclose(pointer);
	return;
}
