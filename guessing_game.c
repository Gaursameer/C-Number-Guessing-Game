
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void giveHint(int guess, int number) {
    int diff = abs(guess - number);
    
    if (diff == 0) {
        printf("🎉 Correct! You guessed the number!\n");
    } else if (diff <= 2) {
        printf("🔥 Super close! Just a bit off!\n");
    } else if (diff <= 5) {
        printf("⭐ Close! You're almost there!\n");
    } else if (diff <= 10) {
        printf("🙂 Not too far! Try adjusting a little.\n");
    } else {
        printf("😅 Way off! Try a different range.\n");
    }
}

int main() {
    srand(time(0));  
    int number = rand() % 100 + 1; // Random number between 1-100
    int guess, attempts = 0;
    
    printf("🎮 Welcome to the Number Guessing Game!\n");
    printf("🔢 Guess a number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        giveHint(guess, number);

    } while (guess != number);

    printf("🏆 You found the number in %d attempts!\n", attempts);
    return 0;
}
