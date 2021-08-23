#include <stdio.h>
#include <stdlib.h>

struct alpha{
    char *alp;
}sort[5];

void sortarray(){
    
    for (int i=0;i<5;i++){
        sort[i].alp = malloc(sizeof(char *));
    }
    sort[0].alp='h';
    sort[1].alp='e';
    sort[2].alp='l';
    sort[3].alp='l';
    sort[4].alp='o';
    
    char temp;
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if ((sort[j].alp) < (sort[i].alp)){
                temp = sort[i].alp;
                sort[i].alp = sort[j].alp;
                sort[j].alp = temp;
            }
        }
    }
}

void display(){
    for (int j=0;j<5;j++){
        printf("%c ",sort[j].alp);
    }
}
int main() {
    sortarray();
    display();
    return 0;
}
