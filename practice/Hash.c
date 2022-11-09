#include <stdio.h>
#define size 10
int arr[size];
void intialization_array()
{
    int i;
    for (i = 0; i < size; i++)
        arr[i] = -1;
}
void insert(int val)
{
    int key = val % size;
    if (arr[key] == -1)
    {
        arr[key] = val;
        printf("%d inserted at arr[%d]\n", val, key);
    }
    else
    {
        printf("Collision : arr[%d] has element %d already!\n", key, arr[key]);
        printf("Unable to insert %d\n", val);
    }
}
void del(int val)
{
    int key = val % size;
    if (arr[key] == val)
        arr[key] = -1;
    else
        printf("%d not present in the hash table\n", val);
}
void search(int val)
{
    int key = val % size;
    if (arr[key] == val)
        printf("Search Found\n");
    else
        printf("Search Not Found\n");
}
void display()
{
    int i;
    printf("\n Hash Table:\n");
    for (i = 0; i < size; i++)
        printf("|%d:%d", i, arr[i]);
    printf("|\n");
}
int main()
{
    intialization_array();
    insert(10);
    insert(5);
    printf("Hash table\n");
    display();
    printf("\n");
    printf("Searching val 4..\n");
    search(4);
    printf("Searching val 10..\n");
    search(10);
    return 0;
}
