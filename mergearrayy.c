#include <stdio.h>

int main() {
    int s1, s2, i;
    
    printf("Enter size of array no1: ");
    scanf("%d", &s1);
    int a[s1];
    
    printf("Enter size of array no2: ");
    scanf("%d", &s2);
    int b[s2];
    
    printf("Enter numbers to be stored in array no1:\n");
    for(i = 0; i < s1; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter numbers to be stored in array no2:\n");
    for(i = 0; i < s2; i++) {
        scanf("%d", &b[i]);
    }
    
    int s3 = s1 + s2;
    int c[s3];
    
    // Copy elements from a[] to c[]
    for(i = 0; i < s1; i++) {
        c[i] = a[i];
    }
    
    // Copy elements from b[] to c[], starting after s1 elements
    for(i = 0; i < s2; i++) {
        c[s1 + i] = b[i];
    }
    
    printf("The OUTPUT :: ");
    for(i = 0; i < s3; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}

