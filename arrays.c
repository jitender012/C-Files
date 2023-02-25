#include <stdio.h>
int main(int argc)
{
    // int i, j, a[3][3], b[3][3], c[3][3];

    // printf("Enter the numbers for first matrix:\n");
    // for (i = 1; i <= 3; i++)
    // {
    //     for (j = 1; j <= 3; j++)
    //     {
    //         scanf("%d", &a[i][j]);
    //     }
       
    // }
    
    // printf("Enter the numbers for second matrix:\n");
    // for (i = 1; i <= 3; i++)
    // {
    //     for (j = 1; j <= 3; j++)
    //     {
    //         scanf("%d", &b[i][j]);
    //     }
    // }
    // printf("The sum of two matrix is:\n");
    // for (i = 1; i <= 3; i++)
    // {
    //     for (j = 1; j <= 3; j++)
    //     {
    //         c[i][j] = a[i][j] + b[i][j];
    //         printf("%d   ", c[i][j]);
    //     }
    //     printf("\n");
    // }
    
    //Initialize array   
    int n, i;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    int arr1[n]; 
    printf("Enter elements of the array:");
    for(i=0; i<n; i++){
    scanf("%d",&arr1[i]);
    } 
    printf("The elements are:\n");
    for(i=0; i<n; i++){
       printf("%d ",arr1[i]);
    } 
    printf("\n");
    
      for ( i = 0, j = num - 1; i < num/2; i++, j--)  
    {     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
    cout << "\n Reverse all elements of the array: " << endl;  
    // use for loop to print the reverse array  
    for ( i = 0; i < num; i++)  
    {  
        cout << arr[i] << " ";  
    }  
      
    // //Calculate length of array arr1  
    // int length = sizeof(arr1)/sizeof(arr1[0]);  
    //   printf("%d\n", length);
    // //Create another array arr2 with the size of arr1.    
    // int arr2[length];  
      
    // //Copying all elements of one array into another  
    // for (int i = 0; i < length; i++) {   
    //     arr2[i] = arr1[i];   
    // }    
      
    // //Displaying elements of array arr1   
    // printf("Elements of original array: \n");  
    // for (int i = 0; i < length; i++) {   
    //     printf("%d ", arr1[i]);  
    // }        
    // printf("\n");  

    // //Displaying elements of array arr2   
    // printf("Elements of new array: \n");  
    // for (int i = 0; i < length; i++) {   
    //     printf("%d ", arr2[i]);  
    // }  
}