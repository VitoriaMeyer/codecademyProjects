#include <stdio.h>
#include <stdlib.h>

int weightConv(int planet, float weight)
{
  printf("Planets:\n\n 1 Mercury\n 2 Venus\n 3 Mars\n 4 Jupiter\n 5 Saturn\n 6 Uranus\n 7 Neptune\n");
  printf(" \nEnter a digit for the planet you want to fight:\n ");
  scanf("%d", &planet);
  printf("\033c");
  if (planet > 7 || planet < 1)
    printf("Your digit is not valid, please try again!\n");
  if (planet == 1){
    weight *= 0.38;
    printf("Your weight on Mercury would be:\n%2.f\n", weight);
  }
  if (planet == 2){
    weight *= 0.91;
    printf("Your weight on Venus would be:\n%2.f\n", weight);
  }
  if (planet == 3){
    weight *= 0.38;
    printf("Your weight on Mars would be:\n%2.f\n", weight);
  }
  if (planet == 4){
    weight *= 2.34;
    printf("Your weight on Jupiter would be:\n%2.f\n", weight);
  }
  if (planet == 5){
    weight *= 1.06;
    printf("Your weight on Saturn would be:\n%2.f\n", weight);
  }
  if (planet == 6){
    weight *= 0.92;
    printf("Your weight on Uranus would be:\n%2.f\n", weight);
  }
  if (planet == 7){
    weight *= 1.19;
    printf("Your weight on Neptune would be:\n%2.f\n", weight);
  }  
}

int main() {
  float weight;
  int planet;
  int confirm;

  printf("What is your earth weight?\n");
  scanf("%f", &weight);
  system("clear");
  if (weight < 0){
    printf("Are you kidding me?\n");
    return 0;
  }
  if (weight > 1000){
    printf("Preocupante...\n");
    return 0;
  }
  weightConv(planet, weight);
  while (1){
    printf("\nWould you like to see your weight in another planet?\n");
    printf("Press    ( 1 ) for Yes    ( 2 ) for No\n");
    scanf("%d", &confirm);
    printf("\033c");
    if (confirm == 1)
      weightConv(planet, weight);
    else
      return 0;
  }
}
