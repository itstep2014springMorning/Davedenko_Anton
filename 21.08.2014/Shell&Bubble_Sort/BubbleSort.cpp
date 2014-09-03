#include <stdio.h>
void bubblesort(int *A, int N){

}
int main(){
int i;
int A[10] = { 44, 23, 43, 34,15, 18, 20, 84, 29, 100 };
for (i = 0; i < 10; i++){
printf("%d ", A[i]);
}
printf("\n");
int j,tmp;


for (j = 0; j < 10-1; j++){
for (i = 0; i < 10-j-1; i++){
if (A[i]>A[i + 1]){
tmp = A[i];
A[i] = A[i + 1];
A[i + 1]=tmp;
}
}
}
for (i = 0; i < 10; i++){
printf("%d ", A[i]);
}
printf("\n");
return 0;
}