#include <stdio.h>
#include <stdlib.h>

struct Car {
    char* brand;
    char* model;
    int price;
};

struct Car* maxCarPrice(struct Car cars[], int n) {
    if (n == 0) {
        return NULL; 
    }

    struct Car* maxCar = &cars[0]; 
    for (int i = 1; i < n; i++) {
        if (cars[i].price > maxCar->price) {
            maxCar = &cars[i]; 
        }
    }

    return maxCar;
}

int main() {
    struct Car cars[] = {
        {"Mercedec", "gle 350", 20000},
        {"BMW", "x7", 25000},
        {"Toyota ", "supra", 30000},
        {"Nissan", "skyline", 22000},
    };

    int n = sizeof(cars) / sizeof(cars[0]);

    struct Car* maxPriceCar = maxCarPrice(cars, n);

    if (maxPriceCar != NULL) {
        printf("Машина с максимальной ценой:\n");
        printf("Бренд: %s\n", maxPriceCar->brand);
        printf("Модель: %s\n", maxPriceCar->model);
        printf("Цена: %d\n", maxPriceCar->price);
    } else {
        printf("Массив машин пуст.\n");
    }

    return 0;
}