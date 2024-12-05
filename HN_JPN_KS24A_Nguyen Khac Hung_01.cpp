#include <stdio.h>
int main() {
    int arr[100]; 
    int choice;
    int n = 5; 
    int sum =0;
    int max = arr[0], min = arr[0];
    int searchElement;
    int s = 1;
    int found = 0;
    int indexToDelete;
    arr[0] = 9;
    arr[1] = 6;
    arr[2] = 8;
    arr[3] = 0;
    arr[4] = 3;

    do {
       
        printf("Menu:\n");
        printf("1. Nhap so phan tu co gia tri trong mang\n");
        printf("2. In ra cac phan tu trong mang\n");
        printf("3. Gia tri lon nhat va nho nhat trong mang\n");
        printf("4. In ra tong cua tat ca cac phan tu\n");
        printf("5. Them mot phan tu vao cuoi mang\n");
        printf("6. Xoa phan tu tai 1 vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu giam dan\n");
        printf("8. Tim kiem phan tu trong mang\n");
        printf("9. In ra toan bo so nguyen to trong mang\n");
        printf("10. Xap xep mang theo thu tu tang dan\n");
        printf("11. Thoat\n");
        printf("Moi ban nhap: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu cho mang (toi da 100 phan tu): ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cho mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("In ra cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                printf("Gia tri lon nhat: %d, Gia tri nho nhat: %d\n", max, min);
                break;
            case 4:  
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Tong cua tat ca cac phan tu: %d\n", sum);
                break;
            case 5:
                if (n < 100) {
                    int newElement;
                    printf("Nhap phan tu moi: ");
                    scanf("%d", &newElement);
                    arr[n] = newElement;
                    n++;
                    printf("Phan tu moi da duoc them.\n");
                } else {
                    printf("Mang da day, khong the them phan tu moi.\n");
                }
                break;
            case 6:
                printf("Nhap vi tri cua phan tu can xoa (0 to %d): ", n - 1);
                scanf("%d", &indexToDelete);
                if (indexToDelete >= 0 && indexToDelete < n) {
                    for (int i = indexToDelete; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Phan tu tai vi tri %d da duoc xoa.\n", indexToDelete);
                } else {
                    printf("Vi tri khong hop le.\n");
                }
                break;

            case 7:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] < arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep giam dan:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 8:
                printf("Nhap phan tu can tim: ");
                scanf("%d", &searchElement);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == searchElement) {
                        found = 1;
                        break;
                    }
                }
                if (found) {
                    printf("Phan tu %d ton tai trong mang.\n", searchElement);
                } else {
                    printf("Phan tu %d khong ton tai trong mang.\n", searchElement);
                }
                break;
            case 9:
                printf("Cac so nguyen to trong mang: ");
                for (int i = 0; i < n; i++) {
                    if (arr[i] < 2) {
                        s = 0;
                    }
                    for (int j = 2; j <= arr[i] / 2; j++) {
                        if (arr[i] % j == 0) {
                            s = 0;
                            break;
                        }
                    }
                    if (s) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;
            case 10:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep tang dan:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 11:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    } while (choice != 11);

    return 0;
}

