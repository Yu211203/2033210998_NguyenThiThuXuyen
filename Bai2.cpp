#include <stdio.h>
int isPerfectSquare(int num){
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

void countAndPrintPerfectSquares(int n){
    printf("Cac so chinh phuong nho hon %d la: ",n);
    int count = 0;
    for(int i = 1; i < n; i++){
        if(isPerfectSquare(i)){
            printf("%d ",i);
            count++;
        }
    }
    printf("\nTong so chinh phuong: %d\n",count);
}

int main(void){
    int n;
    
    scanf("%d",&n);
 countAndPrintPerfectSquares(n);
}
