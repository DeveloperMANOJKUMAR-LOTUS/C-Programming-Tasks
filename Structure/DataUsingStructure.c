#include <stdio.h>
struct info {
    int id;
    char name[20];
    int mark;
    
}s1,s2;
void main(){
    
    printf("Enter the ID:");
    scanf("%d", &s1.id);
    printf("Enter the name:");
    scanf("%s", s1.name);
    printf("Enter the mark:");
    scanf("%d", &s1.mark);
    printf("ID : %d and name is %s and mark: %d ", s1.id, s1.name,s1.mark);
    
    
}
