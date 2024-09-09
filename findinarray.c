#include <stdio.h>
int main(){
    int n,found=0;
    int i=0;
    int j=0;
    scanf("%d",&n);
    int arr[n][n];
    printf("ENter the elements");
    for( i=0;i<n;i++){
        for( j=0;j<n;j++)
        {scanf("%d",&arr[i][j]);
        }}
        int x;
        printf("enter the element");
        scanf("%d",&x);
        j=n-1;
        i=0;
    while(i<n&&j>=0){
        if(arr[i][j]==x){
            found=1;
            break;
            
        }
        else if(arr[i][j]>x)
            j--;
        else
            i++;
    }
    if(found==1)
    printf("The element is present");
    else 
    printf("not found");
    return 0;
}
