#include <iostream>
#include <conio.h>
#include "game.h"
#include <cstdlib>
#include <ctime>
#define _WIN32_WINNT 0x0500
#include <windows.h>
using namespace std;

int main()
{
	HWND hwnd = GetForegroundWindow();
	ShowWindow(hwnd, SW_SHOWMAXIMIZED);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	srand(time(NULL));
	int maze[41][41];
	char k = _getch();
	while(k != '0'){
		cout << "1 - easy" << endl << "2 - medium" << endl << "3 - hard" << endl;
		int level;
		cin >> level;
		int x = (rand()%20)*2+1, y = (rand() % 20) * 2 + 1;
		gener(maze, x, y);
		//int leng = 0;
		//int max = 0, max1 = 0, max2 = 0;
		//leng = endsur1(maze, x, y, 5, 0, max, max1, max2);
		//maze[max1][max2] = 2;
		if (level == 1) {
			writee(maze, x, y);
			char dv;
			while (maze[x][y] != 2) {
				dv = _getch();
				switch (dv) {
				case 'w': {
					x--;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writee(maze, x, y);
					else x++;
					break;
				}
				case 's': {
					x++;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writee(maze, x, y);
					else x--;
					break;
				}
				case 'd': {
					y++;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writee(maze, x, y);
					else y--;
					break;
				}
				case 'a': {
					y--;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writee(maze, x, y);
					else y++;
					break;
				}
				}
			}
			system("CLS");
			SetConsoleTextAttribute(hConsole, 15);
			cout << "you win" << endl;
		}
		if (level == 2) {
			writem(maze, x, y);
			char dv;
			while (maze[x][y] != 2) {
				dv = _getch();
				switch (dv) {
				case 'w': {
					x--;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writem(maze, x, y);
					else x++;
					break;
				}
				case 's': {
					x++;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writem(maze, x, y);
					else x--;
					break;
				}
				case 'd': {
					y++;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writem(maze, x, y);
					else y--;
					break;
				}
				case 'a': {
					y--;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writem(maze, x, y);
					else y++;
					break;
				}
				}
			}
			system("CLS");
			SetConsoleTextAttribute(hConsole, 15);
			cout << "you win" << endl;
		}
		if (level == 3) {
			writeh(maze, x, y);
			char dv;
			while (maze[x][y] != 2) {
				dv = _getch();
				switch (dv) {
				case 'w': {
					x--;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writeh(maze, x, y);
					else x++;
					break;
				}
				case 's': {
					x++;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writeh(maze, x, y);
					else x--;
					break;
				}
				case 'd': {
					y++;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writeh(maze, x, y);
					else y--;
					break;
				}
				case 'a': {
					y--;
					if (((y > 0 && y < 41) && (x > 0 && x < 41)) && ((maze[x][y] == 1) || (maze[x][y] == 2))) writeh(maze, x, y);
					else y++;
					break;
				}
				}
			}
			system("CLS");
			SetConsoleTextAttribute(hConsole, 15);
			cout << "you win" << endl;
		}
		cout << "press to 0 for exit or press any key for start nuw game" << endl;
		k = _getch();
	}
	return 0;
}