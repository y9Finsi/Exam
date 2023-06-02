#include <stdio.h>

void changeMax(int arr[], int n) {
    int pervyi_max = arr[0], 
    vtoroyi_max = -1, 
    id_pervogo = 0, 
    id_vtorogo = -1;
    
    // Находим первый максимум и его индекс
    for (int i = 1; i < n; i++) {
        if (arr[i] > pervyi_max) {
            pervyi_max = arr[i];
            id_pervogo = i;
        }
    }
    
    // Находим второй максимум и его индекс
    for (int i = 0; i < n; i++) {
        if (i == id_pervogo) {
            continue; // пропускаем первый
        }
        if (arr[i] > vtoroyi_max) {
            vtoroyi_max = arr[i];
            id_vtorogo = i;
        }
    }
    
    // Меняем местами первый и второй
    arr[id_pervogo] = vtoroyi_max;
    arr[id_vtorogo] = pervyi_max;
}

int main() {
    int arr[100];
    int n;
    
    printf("Введите размер массива (не более 100): ");
    scanf("%d", &n);
    
    printf("Введите элементы массива через пробел: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    changeMax(arr, n);
    
    printf("Массив после замены максимальных элементов: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
