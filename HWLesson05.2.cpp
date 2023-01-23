#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[100][100]{};
    int line, column;
    printf("Введите количество строк массива: ");
    scanf_s("%i", &line);
    printf("Введите количество столбцов массива: ");
    scanf_s("%i", &column);
    printf("Введите элементы массива: \n");
    for (int j = 0; j < line; j++) {
        for (int i = 0; i < column; i++) {
            scanf_s("%i", &arr[j][i]);
        }
    }
    printf("Вы ввели массив со следующими элементами: \n");
    for (int j = 0; j < line; j++) {
        for (int i = 0; i < column; i++) {
            printf("%2i", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}