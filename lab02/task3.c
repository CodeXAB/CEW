#include <stdio.h>
int main() {
    char s1[] = "default", s2[] = "default";
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    int i;
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);

    if (s1[i] == '\0' && s2[i] == '\0') {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}

