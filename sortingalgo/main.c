#include <stdio.h>
#include <stdlib.h>
void BubleSort(int arr[],int l)
{
    //this continuous checking / compare  for the next element
    // every full checking neglect a element from the end of the array
    for(int i=0;i<l-1;i++)
        for(int j=0;j<l-i-1;j++)
            if(arr[j]>arr[j+1])
            {
                arr[j]^=arr[j+1];
                arr[j+1]^=arr[j];
                arr[j]^=arr[j+1];
            }
}

void SelectionSort(int arr[],int l)
{
    //at the first loop we compare the first element with the all of the array if the minimum one will swapped
    //then move to the second element and neglect the previous element then so on
    for(int i=0;i<l-1;i++)
    {
        for(int j=i;j<l;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]^=arr[j];
                arr[j]^=arr[i];
                arr[i]^=arr[j];
            }
        }
    }
}
int inserionSort(int arr[],int l)
{
    for(int i=1;i<l;i++)
    {
        int j=i;
        int k=i;
        do{
                j--;
            if(arr[k]<arr[j])
            {
                arr[k]^=arr[j];
                arr[j]^=arr[k];
                arr[k]^=arr[j];
                k=j;
            }
            else break;
        }while(j>0);

    }
}
int main()
{
    int x[]={8,7,9,1,0,3,2,4,6,5};
    printf("Hello world!\n");
    //BubleSort(x,sizeof(x)/sizeof(int));
    //SelectionSort(x,sizeof(x)/sizeof(int));
    inserionSort(x,sizeof(x)/sizeof(int));
    for(int i=0;i<sizeof(x)/sizeof(int);i++)
        printf("%d,,",x[i]);
    return 0;
}
