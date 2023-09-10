// C program for snake game

#include <conio.h>  //The conio stands for Console-Input-Output
#include <stdio.h>  //wide range to access input and ouput functions.
#include <stdlib.h> // a variety of utility functions for type conversions, memory allocation etc.
#include <unistd.h> //defines miscellaneous symbolic constants and types.

int a, b, height = 20, width = 20;
int gameover, score;
int c, d, fruitx, fruity, flag;

// Function to generate the fruit or ball
// within the boundary
gameover = 0
c = height / 2;
d = width / 2;

while True:
    fruitx = rand() % 20
    if fruitx != 0:
        break

while True:
    fruity = rand() % 20
    if fruity != 0:
        break

score = 0


// Function to draw the boundaries
void draw()
{
	system("cls");
	for (a = 0; a < height; a++) {
		for (b = 0; b < width; b++) {
			if (a == 0 || a == width - 1
				|| b == 0
				|| b == height - 1) {
				printf("#");
			}
			else {
				if (a == c && b == d)
					printf("0");
				else if (a == fruitx
						&& b == fruity)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	// Print the score after the
	// game ends
	printf("score = %d", score);
	printf("\n");
	printf("press X to quit the game");
}

// Function to take the input
void input()
{
	if (kbhit()) {
		switch (getch()) {
		case 'a':
			flag = 1;
			break;
		case 's':
			flag = 2;
			break;
		case 'd':
			flag = 3;
			break;
		case 'w':
			flag = 4;
			break;
		case 'x':
			gameover = 1;
			break;
		}
	}
}

// Function for the logic behind
// each movement
void logic()
{
	sleep(0.01);
	switch (flag) {
	case 1:
		d--;
		break;
	case 2:
		c++;
		break;
	case 3:
		d++;
		break;
	case 4:
		c--;
		break;
	default:
		break;
	}

	// If the game is over
	if (c < 0 || c > height
		|| d < 0 || d > width)
		gameover = 1;

	// If snake reaches the fruit or a ball
	// then update the score
	if (c == fruitx && d == fruity) {
	label3:
		fruitx = rand() % 20;
		if (fruitx == 0)
			goto label3;

	// After eating the above fruit or ball
	// generate new fruit or ball
	label4:
		fruity = rand() % 20;
		if (fruity == 0)
			goto label4;
		score += 10;
	}
}

// Driver Code
void main()
{
	int e, f;

	// Generate boundary
	setup();

	// Until the game is over
	while (!gameover) {

		// Function Call
		draw();
		input();
		logic();
	}
}

