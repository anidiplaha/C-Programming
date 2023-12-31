#include<stdio.h>
#include<conio.h>
#define MAX 5

int newgap(int gap)
{
    gap = (gap * 10) / 13;
    if (gap == 9 || gap == 10)
        gap = 11;

    if (gap < 1)
        gap = 1;
    return gap;
}

void CombSort(int arr[])
{
    int gap = MAX;
    int temp = 0;
    int swapped = 0;

    int i = 0;
    int j = 0;

    while (1) 
	{
        gap = newgap(gap);

        swapped = 0;
        i = 0;
        while (i < MAX - gap) 
		{
            j = i + gap;
            if (arr[i] > arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
            i++;
        }
        if (gap == 1 && !swapped)
            break;
    }
}

int main()
{
    int i = 0;
    int arr[MAX];

    printf("Enter array elements:\n");
    while (i < MAX) {
        printf("Element[%d]: ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    CombSort(arr);

    printf("Sorted Array: \n");
    i = 0;
    while (i < MAX) 
	
	{
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
	getch();
    return 0;
}
