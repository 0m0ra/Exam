#include <stdio.h>

int triangleType(int a, int b, int c) {

    if (a + b <= c || a + c <= b || b + c <= a) {
        return 0; 
    }

    
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        return 1; 
    }

    return 2;
}

int main() {
    int a, b, c;
    printf("Введите стороны треугольника: ");
    scanf("%d %d %d", &a, &b, &c);

    int type = triangleType(a, b, c);
    
    switch (type) {
        case 0:
            printf("Треугольник не может существовать.\n");
            break;
        case 1:
            printf("Треугольник прямоугольный.\n");
            break;
        case 2:
            printf("Обычный треугольник.\n");
            break;
    }

    return 0;
}