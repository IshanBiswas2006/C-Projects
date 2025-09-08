#include <stdio.h>
#include <string.h>

struct Qs
{
    char Qns[100];
    char ans[3][100];
    int right;
};

int Quiz(struct Qs Q[], int *total)
{
    *total = 3;

    strcpy(Q[0].Qns, "lionel messi first match in which year?");
    strcpy(Q[0].ans[0], "2006");
    strcpy(Q[0].ans[1], "2007");
    strcpy(Q[0].ans[2], "2003");
    Q[0].right = 2;

    strcpy(Q[1].Qns, "Lionel Messi won his first Ballon d'Or in?");
    strcpy(Q[1].ans[0], "2009");
    strcpy(Q[1].ans[1], "2008");
    strcpy(Q[1].ans[2], "2007");
    Q[1].right = 0;

    strcpy(Q[2].Qns, "Lionel messi won Olympic gold in");
    strcpy(Q[2].ans[0], "2010");
    strcpy(Q[2].ans[1], "2006");
    strcpy(Q[2].ans[2], "2008");
    Q[2].right = 2;

    return 0;
}

int runQuiz(struct Qs Q[], int total)
{
    int score = 0;
    int choice;

    for (int i = 0; i < total; i++)
    {
        printf("\nQ%d: %s\n", i + 1, Q[i].Qns);
        for (int j = 0; j < 3; j++)
        {
            printf("  %d. %s\n", j + 1, Q[i].ans[j]);
        }

        printf("Your answer (1-3): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 3)
        {
            printf("Invalid choice\n");
            continue;
        }

        if (choice - 1 == Q[i].right)
        {
            printf("Right ans\n");
            score++;
        }
        else
        {
            printf("Wrong ans Correct answer: %s\n", Q[i].ans[Q[i].right]);
        }
    }

    return score;
}

int main()
{
    struct Qs quiz[10];
    int total;

    Quiz(quiz, &total);
    int score = runQuiz(quiz, total);

    printf("\nFinal Score is: %d out of %d\n", score, total);
    return 0;
}