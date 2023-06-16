#include <stdio.h>
#include <string.h>

void ReverseText(char* text) {
    int i, j;
    char temp;
    int length = strlen(text);
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = text[i];
        text[i] = text[j];
        text[j] = temp;
    }
}

int main() {
    char text[100];
    
    printf("Metni girin: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; // Son satır karakterini kaldırma
    
    ReverseText(text);
    
    printf("Metnin tersi: %s\n", text);
    
    return 0;
}
