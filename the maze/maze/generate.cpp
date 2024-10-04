#include <iostream>
#include <random>
using namespace std;

int endsur1(int maze[][41], int x, int y, int right, int k, int& max, int& max1, int& max2) {
	if (max < k) {
		max = k; max1 = x; max2 = y;
	}
	if (maze[x + 1][y] == 1 && right != 3) {
		k = endsur1(maze, x + 1, y, 1, ++k, max, max1, max2);
	}
	if (maze[x - 1][y] == 1 && right != 1) {
		k = endsur1(maze, x - 1, y, 3, ++k, max, max1, max2);
	}
	if (maze[x][y + 1] == 1 && right != 2) {
		k = endsur1(maze, x, y + 1, 0, ++k, max, max1, max2);
	}
	if (maze[x][y - 1] == 1 && right != 0) {
		k = endsur1(maze, x, y - 1, 2, ++k, max, max1, max2);
	}
	return --k;
}

void gener(int maze[][41], int r2, int r1) {
	for (int i = 0; i < 41; i++) {
		for (int j = 0; j < 41; j++) {
			maze[i][j] = 0;
		}
	}
	int x = r2, y = r1;
	maze[x][y] = 1;
	int k = 0;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 3);
	int r;
	do
	{
		r = dist(gen);
		switch (r)
		{
		case 0: {
			y -= 2;
			if ((y > 0 && y < 41) && ((maze[x][y + 1] == 0 && maze[x][y] == 0) || (maze[x][y + 1] == 1 && maze[x][y] == 1))) {
				if (maze[x][y + 1] == 0 && maze[x][y] == 0) k++;
				maze[x][y + 1] = 1;
				maze[x][y] = 1;
			}
			else
				y += 2;
			break;
		}
		case 1: {
			x += 2;
			if ((x > 0 && x < 41) && ((maze[x - 1][y] == 0 && maze[x][y] == 0) || (maze[x - 1][y] == 1 && maze[x][y] == 1))) {
				if (maze[x - 1][y] == 0 && maze[x][y] == 0) k++;
				maze[x - 1][y] = 1;
				maze[x][y] = 1;
			}
			else
				x -= 2;
			break;
		}
		case 2: {
			y += 2;
			if ((y > 0 && y < 41) && ((maze[x][y - 1] == 0 && maze[x][y] == 0) || (maze[x][y - 1] == 1 && maze[x][y] == 1))) {
				if (maze[x][y - 1] == 0 && maze[x][y] == 0) k++;
				maze[x][y - 1] = 1;
				maze[x][y] = 1;
			}
			else
				y -= 2;
			break;
		}
		case 3: {
			x -= 2;
			if ((x > 0 && x < 41) && ((maze[x + 1][y] == 0 && maze[x][y] == 0) || (maze[x + 1][y] == 1 && maze[x][y] == 1))) {
				if (maze[x + 1][y] == 0 && maze[x][y] == 0) k++;
				maze[x + 1][y] = 1;
				maze[x][y] = 1;
			}
			else
				x += 2;
			break;
			}
		}
	} while (k < 399);
	int leng = 0;
	int max = 0, max1 = 0, max2 = 0;
	leng = endsur1(maze, x, y, 5, 0, max, max1, max2);
	maze[max1][max2] = 2;
	//switch (r) {
	//	{
	//case 0: {
	//	maze[39][39] = 2;
	//	break;
	//}
	//case 1: {
	//	maze[1][39] = 2;
	//	break;
	//}
	//case 2: {
	//	maze[39][39] = 2;
	//	break;
	//}
	//case 3:
	//	maze[39][1]=2;
	//	break;
	//	}
	//}
}
