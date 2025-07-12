#include<stdio.h>

int main()
{
int d, m, y; 
int c_d, c_m, c_y;
int days, years, months;

printf("Enter birth day,month,year: ");
scanf("%d/%d/%d",&d,&m,&y); 

printf("Enter current day,month,year: ");
scanf("%d/%d/%d",&c_d,&c_m,&c_y);

if (c_d < d)
{
    c_d += 30;
    c_m -= 1;
}

days = c_d - d;

if (c_m < m) 
{
    c_m += 12;
    c_y -= 1;
}

 months = c_m - m;
 years = c_y - y;

  printf("Your Age is: %d years, %d months, %d days\n", years, months, days);
 
}