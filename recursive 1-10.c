#include <stdio.h>
void printNumbers(int start, int end){
if (start > end){
        return;
}
printf("%d ", start);
printNumbers(start + 1, end);}
int main(){
int start = 1;
int end = 10;

printf("Numbers from %d to %d:\n", start, end);
printNumbers(start, end);
return 0;

}
