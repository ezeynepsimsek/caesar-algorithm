#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sezar(char cumle[], int key) {
    for (int i = 0; i < strlen(cumle); i++) {
        if (cumle[i] >= 'A' && cumle[i] <= 'Z') {
            cumle[i] = (char)(((cumle[i] - 'A' + key) % 26) + 'A');
        }
    }
    printf("%s\n", cumle);
}

int main() {
    char cumle[50];
    int key;
    printf("Cumle: ");
    gets(cumle);
    strupr(cumle); 

    printf("Key: ");
    scanf("%d", &key);

    sezar(cumle, key);

    return 0;
}

