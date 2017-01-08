#include <stdio.h>

int sum_array(int a[], int num_elements);
void print_array(int a[], int num_elements);

void main(void)
{
    int a[10] = {1, 2, 0, 0, 4, 5, 6, 9, 9, 17};
    int sum;

    printf("\nArray:\n");
    print_array(a, 10);

    sum = sum_array(a, 10);
    printf("The sum is %d\n", sum);
}

int sum_array(int a[], int num_elements)
{
    int i, sum=0;
    for ( i = 0; i < num_elements; i++)
    {
        sum = sum + a[i];
    }
    return(sum);
}

void print_array(int a[], int num_elements)
{
    int i;
    for ( i = 0; i < num_elements; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n ");
}
