#include <stdio.h>
void printMas(int massiv[3][3]){
    int mas[3][3] = {};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", massiv[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int x,y;
    int mas[3][3] = {};
    printMas(mas);
    
    printf("Enter coordinates x y: ");
    scanf("%d%d", &x, &y);
    if(x >= 0 && x < 3 && y >= 0 && y < 3){
        mas[x][y] = 1; 
        printMas(mas);
    }else printf("Wrong coordinates");
    
    return 0;
}
