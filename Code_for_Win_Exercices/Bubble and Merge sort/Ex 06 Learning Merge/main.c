#include <stdio.h>
#include <stdlib.h>


    void merge_1 (int a[], int lenght);
    void merge_2 (int a[], int l, int r);
    void merge_3 (int a[], int l, int m, int r);




int main()
{


    int i, lenght;
    int arr[20];

    printf("Choose the number of elements you want to enter: ");
    scanf("%d", &lenght);

    printf("Enter %d elements down below: \n", lenght);

    for (i=0; i<lenght; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d", &arr[i]);
    }


    merge_1(arr, lenght);
    for (i=0;i<lenght;i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}

    void merge_1(int a[], int lenght)
    {
        merge_2(a, 0, lenght-1);
    }

//--------------------------------------

    void merge_2(int a[], int l, int r)
    {
        if (l<r)
        {
            int m= l+(r-l)/2;
            merge_2(a, l, m);
            merge_2(a, m+1, r);
            merge_3(a, l, m, r);
        }
    }

//----------------------------------------

    void merge_3 (int a[], int l, int m, int r)
    {
        int left_len  = m-l+1;
        int right_len = r-m;

        int arr_l[left_len];
        int arr_r[right_len];

        int i, j, k;

        for (int i=0; i<left_len; i++)
        {
            arr_l[i]=a[l+i];
        }
        for (int i=0; i<right_len; i++)
        {
            arr_r[i]=a[m+i+1];
        }


        for (i=0, j=0, k=l; k<=r; k++)
        {
            if ((i<left_len)&&((j>=right_len)||arr_l[i]<=arr_r[j]))
            {
                a[k]=arr_l[i];
                i++;
            }else
            {
                a[k]=arr_r[j];
                j++;
            }
        }

    }





 /*

    // Creiezi Merge 1

    void merge_1(int a[], int lenght)
    {
        merge_2(a,0,lenght-1);
    }

    // Creiezi Merge 2 (are left si right el) aici o faci variabila m si delimetezi left (de la l la m) si right (m+1 la r)

    void merge_2(int a[], int l, int r)
    {
        if (l<r)
        {
            int m = l + (r-l)/2;
            merge_2(a,l, m);
            merge_2(a,m+1,r);
            merge_3(a,l,m,r);
        }
    }

    // Creiezi Merge 3

     void merge_3 (int a[], int l, int m, int r)
    {

        int left_len= m-l+1;

        int right_len= r-m;

        int arr_l [left_len];
        int arr_r [right_len];

        int i, j, k;

            for (int i=0; i< left_len; i++)
    {
        arr_l[i]=a[l+i];
    }

    for (int i=0; i< right_len; i++)
    {
        arr_r[i]=a[m+1+i];
    }

    for (i=0, j=0, k=l; k<=r; k++)
    {
        if ((i<left_len)&&((j>=right_len)||arr_l[i]<=arr_r[j]))
        {
            a[k]=arr_l[i];
            i++;
        }
        else
        {
            a[k]=arr_r[j];
            j++;
        }
    }

*/
