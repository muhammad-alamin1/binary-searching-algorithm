/**
    binary searching algorithm prototype:
    void *bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));
*/
#include<stdio.h>
#include<stdlib.h>


const compare_func(const void * a, const void * b);

int main()
{
    int key, *item, n = 5;
    int values[] = {1, 2, 6, 9, 11};

    while(1)
    {
        printf("Enter the value of the key (0 to exit): ");
        scanf("%d", &key);
        if(key == 0)
        {
            break;
        }

        item = (int *) bsearch(&key, values, n, sizeof(int), compare_func);

        if(item != NULL)
        {
            printf("Item Found: %d\n", *item);
        }
        else
        {
            printf("Item not found in array\n");
        }
    }

    return 0;
}

int compare_func(const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}
