#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

void repr_bytes_to_hex(char *array, int size){
	for(int i = 0; i < size; i++)
		printf("%02X ", array[i]);
	putc('\n', stdout);
}
int main(int argc, char **argv){
	if(argc != 2){
		fprintf(stderr, "Invalid argument.\n");
		return EXIT_FAILURE;
	}

	char *fname = argv[1];
	
	FILE *input_file = fopen(fname, "rb");
	assert(input_file != NULL);

	int len = 16;
	int x = 0;
	char c;
	char c_array[len];
	while(true){
		c = fgetc(input_file);

		if(c == EOF){
			c_array[x] = '\0';
			break;
		}

		if(x > (len - 1)){
			repr_bytes_to_hex(c_array, sizeof(c_array));
			x = 0;
		}

		c_array[x] = c;
		x++;
	}

	repr_bytes_to_hex(c_array, x);

	fclose(input_file);

	return EXIT_SUCCESS;
}