#include <stdio.h>

void main()
{
  double principle, time, rate, si;

  printf("Enter the principle (amount): ");
  scanf("%lf", &principle);

  printf("Enter the time (years): ");
  scanf("%lf", &time);

  printf("Enter the rate (roi): ");
  scanf("%lf", &rate);

  si = (principle * rate * time) / 100;

  printf("\nSimple Interest = %.2lf", si);
}
