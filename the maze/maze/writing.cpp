#include <iostream>
#define _WIN32_WINNT 0x0500
#include <windows.h>
using namespace std;

void writee(int maze[][41], int x, int y) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cd;
	cd.X = 0;
	cd.Y = 0;
	SetConsoleCursorPosition(hd, cd);
	for (int i = 0; i < 41; i++) {
		for (int j = 0; j < 41; j++) {
			if (i!=x || j!=y) {
				switch (maze[i][j]) {
				case 0: {
					SetConsoleTextAttribute(hConsole, 231);
						cout.width(2);
						cout << " ";
						break;
					}
				case 1: {
					SetConsoleTextAttribute(hConsole, 135);
						cout.width(2);
						cout << " ";
						break;
					}
				case 2: {
					SetConsoleTextAttribute(hConsole, 71);
						cout.width(2);
						cout << " ";
						break;
					}
				}
			}else{
				SetConsoleTextAttribute(hConsole, 23);
				cout.width(2);
				cout << " ";
			}
		}
		SetConsoleTextAttribute(hConsole, 15);
		cout << endl;
	}
}

void writeh(int maze[][41], int x, int y) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int ox = x - 1;
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cd;
	cd.X = 0;
	cd.Y = 0;
	SetConsoleCursorPosition(hd, cd);
	for (int str = 0; str < 3; str++) {
		for (int k = 0; k < 13; k++) {
			for (int r = 0; r < 13; r++) {
				if (maze[ox][y - 1] == 0) {
					SetConsoleTextAttribute(hConsole, 231);
					cout.width(2);
					cout << " ";
				}
				else if (maze[ox][y - 1] == 1) {
					SetConsoleTextAttribute(hConsole, 135);
					cout.width(2);
					cout << " ";
				}
				else if (maze[ox][y - 1] == 2) {
					SetConsoleTextAttribute(hConsole, 71);
					cout.width(2);
					cout << " ";
				}
			}
			for (int r = 0; r < 13; r++) {
				if (ox != x) {
					if (maze[ox][y] == 0) {
						SetConsoleTextAttribute(hConsole, 231);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y] == 1) {
						SetConsoleTextAttribute(hConsole, 135);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y] == 2) {
						SetConsoleTextAttribute(hConsole, 71);
						cout.width(2);
						cout << " ";
					}
				}
				else {
					SetConsoleTextAttribute(hConsole, 23);
					cout.width(2);
					cout << " ";
				}
			}
			for (int r = 0; r < 13; r++) {
				if (maze[ox][y + 1] == 0) {
					SetConsoleTextAttribute(hConsole, 231);
					cout.width(2);
					cout << " ";
				}
				else if (maze[ox][y + 1] == 1) {
					SetConsoleTextAttribute(hConsole, 135);
					cout.width(2);
					cout << " ";
				}
				else if (maze[ox][y + 1] == 2) {
					SetConsoleTextAttribute(hConsole, 71);
					cout.width(2);
					cout << " ";
				}
			}
			SetConsoleTextAttribute(hConsole, 15);
			cout << endl;
		}
		ox++;
	}
	SetConsoleTextAttribute(hConsole, 15);
	cout << endl;
	cout << endl;
}

void writem(int maze[][41], int x, int y) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int ox = x - 2;
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cd;
	cd.X = 0;
	cd.Y = 0;
	SetConsoleCursorPosition(hd, cd);
	for (int str = 0; str < 5; str++) {
		for (int k = 0; k < 8; k++) {
			for (int r = 0; r < 8; r++) {
				if ((y-2 > 0 && y-2 < 41) && (ox > 0 && ox < 41)) {
					if (maze[ox][y - 2] == 0) {
						SetConsoleTextAttribute(hConsole, 231);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y - 2] == 1) {
						SetConsoleTextAttribute(hConsole, 135);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y - 2] == 2) {
						SetConsoleTextAttribute(hConsole, 71);
						cout.width(2);
						cout << " ";
					}
				}else{
					SetConsoleTextAttribute(hConsole, 231);
					cout.width(2);
					cout << " ";
				}
			}
			for (int r = 0; r < 8; r++) {
				if ((y-1 > 0 && y-1 < 41) && (ox > 0 && ox < 41)) {
					if (maze[ox][y - 1] == 0) {
						SetConsoleTextAttribute(hConsole, 231);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y - 1] == 1) {
						SetConsoleTextAttribute(hConsole, 135);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y - 1] == 2) {
						SetConsoleTextAttribute(hConsole, 71);
						cout.width(2);
						cout << " ";
					}
				}else{
					SetConsoleTextAttribute(hConsole, 231);
					cout.width(2);
					cout << " ";
				}
			}
			for (int r = 0; r < 8; r++) {
				if ((y > 0 && y < 41) && (ox > 0 && ox < 41)) {
					if (ox != x) {
						if (maze[ox][y] == 0) {
							SetConsoleTextAttribute(hConsole, 231);
							cout.width(2);
							cout << " ";
						}
						else if (maze[ox][y] == 1) {
							SetConsoleTextAttribute(hConsole, 135);
							cout.width(2);
							cout << " ";
						}
						else if (maze[ox][y] == 2) {
							SetConsoleTextAttribute(hConsole, 71);
							cout.width(2);
							cout << " ";
						}
					}
					else {
						SetConsoleTextAttribute(hConsole, 23);
						cout.width(2);
						cout << " ";
					}
				}else {
					SetConsoleTextAttribute(hConsole, 231);
					cout.width(2);
					cout << " ";
				}
			}
			for (int r = 0; r < 8; r++) {
				if ((y+1 > 0 && y+1 < 41) && (ox > 0 && ox < 41)) {
					if (maze[ox][y + 1] == 0) {
						SetConsoleTextAttribute(hConsole, 231);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y + 1] == 1) {
						SetConsoleTextAttribute(hConsole, 135);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y + 1] == 2) {
						SetConsoleTextAttribute(hConsole, 71);
						cout.width(2);
						cout << " ";
					}
				}
				else {
					SetConsoleTextAttribute(hConsole, 231);
					cout.width(2);
					cout << " ";
				}
			}
			for (int r = 0; r < 8; r++) {
				if ((y+2 > 0 && y+2 < 41) && (ox > 0 && ox < 41)) {
					if (maze[ox][y + 2] == 0) {
						SetConsoleTextAttribute(hConsole, 231);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y + 2] == 1) {
						SetConsoleTextAttribute(hConsole, 135);
						cout.width(2);
						cout << " ";
					}
					else if (maze[ox][y + 2] == 2) {
						SetConsoleTextAttribute(hConsole, 71);
						cout.width(2);
						cout << " ";
					}
				}else {
					SetConsoleTextAttribute(hConsole, 231);
					cout.width(2);
					cout << " ";
				}
			}
			SetConsoleTextAttribute(hConsole, 15);
			cout << endl;
		}
		ox++;
	}
	SetConsoleTextAttribute(hConsole, 15);
	cout << endl;
}