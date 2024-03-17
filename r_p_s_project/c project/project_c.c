#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int game(char you, char computer) {

	if (you == computer) {
		return -1;
	}
	// you rock 
	if (you == 'r' && computer == 's') {
		return 1;
	}
	else if (you == 'r' && computer == 'p') {
		return 0;
	}
	// you paper
	if (you == 'p' && computer == 'r') {
		return 1;
	}
	else if (you == 'p' && computer == 's') {
		return 0;
	}
	// you scissor
	if (you == 's' && computer == 'p') {
		return 1;
	}
	else if (you == 's' && computer == 'r') {
		return 0;
	}
}

int main() {

	system("color 5");

	int n;
	char you, computer, result;

	printf("Play a game of rock paper and scissor with me\n");
	printf("Enter r for Rock s for Scissor and p for Paper\n"); scanf_s("%c", &you);

	srand(time(NULL));
	n = rand() % 100;

	if (n < 33) {
		computer = 's';
	}
	else if (n > 33 && n < 66) {
		computer = 'p';
	}
	else {
		computer = 'r';
	}

	result = game(you, computer);

	if (result == 1) {
		printf("you have won the game\n");
	}
	else if (result == -1) {
		printf("it's a tie\n");
	}
	else if (result == 0) {
		printf("you are losing to a computer\n");
	}
	printf("your choice: %c,\nthe computer choice: %c", you, computer);

	return 0;
}
