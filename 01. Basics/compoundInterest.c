#include <stdio.h>
#include <math.h>

void main()
{
  double principle, time, rate, ci;

  printf("Enter the principle (amount): ");
  scanf("%lf", &principle);

  printf("Enter the time (years): ");
  scanf("%lf", &time);

  printf("Enter the rate (roi): ");
  scanf("%lf", &rate);

  ci = principle * (pow((1 + rate / 100), time));

  printf("\nCompound Interest = %.2lf", ci);
}
