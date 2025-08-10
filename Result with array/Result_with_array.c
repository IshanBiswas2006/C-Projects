#include <stdio.h>

int main() {
    char name[50],grade;
    int marks[5],total=0,i,n;
    float avg;

    printf("Emter enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter marks:\n");
    for (i = 0; i < 5; i++) {
      printf("Sub%d: ", i + 1); 
      scanf("%d", &marks[i]);
      total += marks[i];
    }


    avg=total/5.0;

if (avg >= 80)
    grade = 'A';
else if (avg >= 50 && avg <= 79)
    grade = 'B';
else if (avg >= 30 && avg <= 49)
    grade = 'C';
else
    grade = 'F';



    printf("%s\n",name);
    printf("%d\n",total);
    printf("%.2f\n",avg);
    printf("%c\n",grade);
    
    
    return 0;
}