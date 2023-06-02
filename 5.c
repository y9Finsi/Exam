#include <stdio.h>
#include <stdlib.h>

struct Car{
    char* brand; // марка автомобиля
    char* model; // модель автомобиля
    int price; // цена автомобиля
};

// наща функцыя
struct Car* maxCarPrice(struct Car cars[], int n) {
    struct Car* maxPtr = &cars[0]; //находим указатель на первый элемент массива 
    for (int i = 1; i < n; i++) { // проходимся по массиву со второго элемента до конца
        if (cars[i].price > maxPtr->price) { //если найденная цена больше текущей максимальной
            maxPtr = &cars[i]; //обновляем указатель на струтуру с максимальной ценой
        }
    }
    return maxPtr; //возвращаем указатель на структуру автомобиля с максимальной ценой
}

int main() {
    struct Car car1 = {"BebraMobile", "228X", 344000};
    struct Car car2 = {"Tenigin", "Q7", 99999};
    struct Car car3 = {"BMW", "X5", 85000};
    struct Car cars[] = {car1, car2, car3};
    
    struct Car* maxCar = maxCarPrice(cars, 3); //находим структуру автомобиля с максимальной ценой из cars
    
    printf("Вот она, легенда:\n");
    printf("Марка: %s\n", maxCar->brand); //выводим марку автомобиля с максимальной ценой
    printf("Модель: %s\n", maxCar->model); //выводим модель автомобиля с максимальной ценой
    printf("Цена: %d\n", maxCar->price); //выводим цену автомобиля с максимальной ценой
    
    return 0; //выход из программы
}
