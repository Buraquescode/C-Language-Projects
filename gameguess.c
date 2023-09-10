#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int guess, number, attempts = 0;
  srand(time(0)); 
  number = rand() % 20 + 1; 
  
  printf("Welcome to the number guessing game!\n");
  printf("Guess a number between 1 and 20: ");
  
  do {
    scanf("%d", &guess);
    attempts++;
    
    if (guess > number) {
      printf("Too high! Guess again: ");
    } else if (guess < number) {
      printf("Too low! Guess again: ");
    }
  } while (guess != number);
  
  printf("Congratulations, you guessed the number in %d attempts!\n", attempts);
  
  return 0;
}
