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
    // we need strcpy to input values in it
    strcpy(store[count].key, key);
    strcpy(store[count].value, value);
    count++;
}

int main() {
    char key[50];
    char value[100];
    
    printf("Welcome To Keybox\n");
    printf("\n");

    printf("Enter The Key: ");
    scanf("%s", key);

    printf("Enter The Value: ");
    scanf("%s", value);

    set(key, value);

    printf("\nStored Key-Value Pair:\n");
    printf("%s : %s\n", store[0].key, store[0].value);

    return 0;
}
