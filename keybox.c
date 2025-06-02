#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct KeyValue {
	char key[50];
	char value[100];
} KeyValue;

KeyValue store[MAX];
int count = 0;

void set(char *key, char *value) {
	if (count < MAX) {
		strcpy(store[count].key, key);
		strcpy(store[count].value, value);
		count++;
	} 
	else {
		printf("Store is full!\n");
	}
}

int main() {
	char key[50];
	char value[100];

	while (1) {
		printf("Welcome To Keybox\n\n");

		printf("Enter The Key (or type 'exit' to quit): ");
		scanf("%49s", key); // 49 limit to avoid buffer overflow

		if (strcmp(key, "exit") == 0) {
			break;
		}

		printf("Enter The Value: ");
		scanf("%99s", value);

		set(key, value);

		printf("\nAll Stored Key-Value Pairs:\n");
		for (int i = 0; i < count; i++) {
			printf("%s : %s\n", store[i].key, store[i].value);
		}
		printf("\n");
	}

	printf("You Exited\n");

	return 0;
}
