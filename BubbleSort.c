#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Array Creation 
    int list[]={};
    int c,a,b,a_size,temp;
    printf("Enter size of the array:");
    scanf("%d",&a_size);
    printf("\nSize to your Array: %d\n",a_size);
    for (c = 0; c < a_size; c++){
        printf("Enter your Element of Index: %d\n",c);
        scanf("%d",&list[c]);
    }
    printf("Here is the array unsorted: \n");
    for (c = 0; c < a_size; c++){
        printf("%2d ",list[c]);
    }
    printf("\n");
    /* Sorting The Array */
    for (a = 0; a < a_size-1; a++){
        for (b = a+1; b < a_size; b++){
            if (list[a] > list[b]){
                temp = list[b];
                list[b] = list[a];
                list[a] = temp;
            }
        }
    }
    /* Display Results */
    printf("Here is the array Bubble Sorted: \n");
    for (c = 0; c < a_size; c++){
        printf("%2d ",list[c]);
    }
    printf("\n");
    return 0;
}
