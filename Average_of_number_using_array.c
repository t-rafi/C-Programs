#include <stdio.h>

int main() {
    int arr[1000],num,sum=0;
    float avg;
    printf("Enter array number: ");
    scanf("%d", &num);

   for(int i=0; i<num; i++){
    printf("Enter %d number: ", i+1);
    scanf("%d", &arr[i]);
    sum+=arr[i];

   }
    printf("\n\nTotal Sum: %d\n\n", sum);
    printf("Total Number: %d\n\n\n", num);
   avg=sum/num;
   printf("Average= Total Sum/Total Number\n");
   printf("%d/%d= %.2f ",sum, num, avg);
    return 0;
}

