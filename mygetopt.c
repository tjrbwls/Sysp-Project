#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int opt;
	char *option_value;

	while ((opt = getopt(argc, argv, "o:a:h:w:r:")) != -1) {
		switch (opt) {
			case 'o':
				option_value = optarg;
				printf("option 'o' value is : %s\n", option_value);
				break;
			case 'a':
				option_value = optarg;
				printf("option 'a' value is : %s\n", option_value);
				break;
			case 'h':
				option_value = optarg;
				printf("option 'h' value is : %s\n", option_value);
				break;
			case 'w':
				option_value = optarg;
				printf("option 'w' value is : %s\n", option_value);
				break;
			case 'r':
				option_value = optarg;
				printf("option 'r' value is : %s\n", option_value);
				break;
			default:
				printf("unknown option: %c\n", opt);
				return 1;
		}
	}

	for (int i = optind; i < argc; i++) {
		printf("argumnt : %s\n", argv[i]);
	}

	return 0;
}
