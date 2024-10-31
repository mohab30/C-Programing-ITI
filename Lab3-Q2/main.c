#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Move the Cursor to specific Coordinates
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// function to perform mathematical operations based on user choice
void chooseCalculator(int choice) {
    system("cls");  // clear screen
    int a, b, result;

    switch(choice) {
        case 0:
            printf("Enter two numbers to add: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid input.\n");
                break;
            }
            result = a + b;
            printf("Result: %d\n", result);
            break;

        case 1:
            printf("Enter two numbers to subtract: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid input.\n");
                break;
            }
            result = a - b;
            printf("Result: %d\n", result);
            break;

        case 2:
            printf("Enter two numbers to multiply: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid input.\n");
                break;
            }
            result = a * b;
            printf("Result: %d\n", result);
            break;

        case 3:
            printf("Enter two numbers to divide: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid input.\n");
                break;
            }
            if (b != 0)  // Check of denominator != 0
                {
                result = a / b;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 4: //end
            return;

        default:
            printf("Invalid choice.\n");
    }

    printf("Press any key to return to the menu ..");
    getch();
}


int main() {
    char key;
    int ch = 0;
    char *menuOptions[] = {"Add", "Subtract", "Multiply", "Divide", "Exit"};

    do {
        system("cls");
        for (int i = 0; i < 5; i++) {
            gotoxy(0, i);
            if (ch == i) {
                printf("--> %s", menuOptions[i]);
            } else {
                printf("    %s", menuOptions[i]);
            }
        }

        key = getch();  // waiting choice
        if (key == -32) {
            key = getch();
            if (key == 72) {
                ch = (ch - 1 + 5) % 5;
            } else if (key == 80) {
                ch = (ch + 1) % 5;
            }
        } else if (key == 13) {
            chooseCalculator(ch);
        }

    } while (key != 27);

    return 0;
}
