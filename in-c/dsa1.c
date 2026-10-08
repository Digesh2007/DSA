//
////#include <stdio.h>
//
//int main()
//{
//    int arr[100],i,n;
//
//    printf("Enter the size of array: ");
//    scanf("%d", &n);
//
//    printf("Enter %d elements:\n", n);
//
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    printf("Array elements are:\n");
//
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
#include <stdio.h>

int main()
{
    int a[100];
    int n, position, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the position to delete: ");
    scanf("%d", &position);

    // Shift elements to the left
    for(i = position - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
