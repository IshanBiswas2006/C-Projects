#include <stdio.h>

int main() {
    int eng, beng, math, phy, chmy, life_sin, his, geo;
    int total;
    float avg, per;

    printf("Enter English Marks: ");
    scanf("%d", &eng);
    printf("Enter Bengali Marks: ");
    scanf("%d", &beng);
    printf("Enter Math Marks: ");
    scanf("%d", &math);
    printf("Enter History Marks: ");
    scanf("%d", &his);
    printf("Enter Geography Marks: ");
    scanf("%d", &geo);
    printf("Enter Physics Marks: ");
    scanf("%d", &phy);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &chmy);
    printf("Enter Life Science Marks: ");
    scanf("%d", &life_sin);

    
    total = eng + beng + math + phy + chmy + life_sin + his + geo;
    avg = total / 8.0;
    per = (total / 800.0) * 100.0;


    if (eng < 49 || beng < 49 || math < 49 || phy < 49 || chmy < 49 || life_sin < 49 || his < 49 || geo < 49) {
        printf("You have failed.\n");
        printf("Total: %d\nAverage: %.2f\nPercentage: %.2f%%\nGrade: F\n", total, avg, per);
    } else {
        printf("You have passed.\n");
        printf("Total: %d\nAverage: %.2f\nPercentage: %.2f%%\n", total, avg, per);

        if (per >= 90)
            printf("Grade: A+\n");
        else if (per >= 80)
            printf("Grade: A\n");
        else if (per >= 70)
            printf("Grade: B\n");
        else if (per >= 60)
            printf("Grade: C\n");
        else
            printf("Grade: D\n");
    }

    return 0;
}