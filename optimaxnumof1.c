#include <stdio.h>
int main(){
    int n,max=0;
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
        j=n-1;
        i=0;
    while(i<n&&j>=0){
        if(arr[i][j]==1){
            max=i;
            j--;
        }
        else
            i++;
    }
    printf("max no. of one at index %d",i);
    return 0;
}
