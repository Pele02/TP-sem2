#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 100

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// return a == b; -> returneaza 1 sau 0 in functie de valoarea de adevar a expresiei

// funtie pentru verificare daca stiva e plina (poate contine maxim 100 de elemente)
int isStackFull(int size) {
	return size >= MAX_SIZE;			// daca marimea stivei este cel putin MAX_SIZE, atunci stiva e plina
}

// functie pentru verificare daca stiva e goala
int isStackEmpty(int size) {
	return size == 0;					// daca marimea stivei e 0 => nu are niciun element
}

// functie pentru afisarea continutului stivei
void printStack(int size, int* stack) {
	int i;
	if (isStackEmpty(size)) {
		printf("\nStack is empty!\n");
	}
	else {
		printf("\nStack is: ");
		for (i = 0; i < (size); i++)
			printf("%d ", stack[i]);
		printf("\n");
	}

}

// functie pentru adaugarea unui element in varful stivei
// valoarea variabilei size se poate modifica in interiorul functiei, asa ca transmitem variabila prin referinta
void push(int* size, int* stack, int valToAdd) {
	if (isStackFull(*size)) {
		printf("\nStack is full!\n");
	}
	else {
			stack[*size] = valToAdd;		// se adauga element in varful stivei
			(*size)++;						// se incrementeaza valoarea variabilei size (adica se actualizeaza pozitia varfului ca fiind cu una mai sus decat inainte)
	}
}

// functie pentru extragerea elementului din varful stivei (il "scoate" din stiva si il returneaza)
// valoarea variabilei size se poate modifica in interiorul functiei, asa ca transmitem variabila prin referinta
int pop(int* size, int* stack) {
	(*size)--;							// se decrementeaza valoarea variabilei size (practic se ignora valoarea din varful stivei, va fi la un moment dat suprascrisa de un push cu o alta valoare, si se actualizeaza varful ca fiind cu o pozitie mai jos)
	return stack[*size];				// se returneaza valoarea fostului varf al stivei (adica elementul extras)
}

// stack -> stiva, in cazul nostru e de tip int si poate avea maxim 100 de elemente
// size -> retine marimea stivei, stack[size - 1] fiind elementul din varful stivei
int main() {
	int stack[MAX_SIZE], size = 0, valToAdd, option;

	do {
		printf("\n\n******************\n*** Stack Menu ***");
		printf("\n\n1. Push\n2. Pop\n3. Print stack\n4. Exit");
		printf("\n\nEnter your choice (1 - 4): ");
		scanf("%d", &option);
		system("cls");

		switch (option) {
		case 1:
			printf("\nEnter element to push: ");
			scanf("%d", &valToAdd);
			push(&size, stack, valToAdd);
			break;
		case 2:
			if (isStackEmpty(size)) {
				printf("\nStack is empty!\n");
			}
			else {
				printf("\nElement %d has been popped.\n", pop(&size, stack));
			}
			break;
		case 3:
			printStack(size, stack);
			break;
		case 4:
			break;
		default:
			printf("\nWrong choice!\n");
		}
	} while (option != 4);
	return 0;
}