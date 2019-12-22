#include <iostream>
using namespace std;
const int ROW = 10;
const int COL = 10;
char pole1[ROW][COL];
char pole2[ROW][COL];
char poleProverka[ROW+2][COL+2];
char pole1Main[ROW][COL];
void InputMass()
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			pole1[i][j] = ' ';
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			pole2[i][j] = ' ';
		}
	}
}
void Pole1Main()
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			pole1Main[i][j] = ' ';
		}
	}
}
void PoleTemp()
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			pole1[i][j] = pole1Main[i][j];
		}
	}
}
void PoleProverka()
{
	for (int i = 0; i < ROW+2; i++)
	{
		for (int j = 0; j < COL+2; j++)
		{
			poleProverka[i][j] = ' ';
		}
	}
}
void OutputMass()
{
	cout << "  A B C D E F G H I J" << endl;
	cout << "  ___________________" << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout << " " << "|";
		for (int j = 0; j < COL; j++)
		{
			cout << pole1[i][j] << "|";
		}
		cout << i+1  << "|";
		cout << endl;
		cout << "  -------------------" << endl;
	}
}
void AlloutputMAss()
{

	cout << "  A B C D E F G H I J" << endl;
	cout << "  ___________________" << endl;
	for (int i = 0; i < ROW+2; i++)
	{
		cout << " " << "|";
		for (int j = 0; j < COL+2; j++)
		{
			cout << poleProverka[i][j] << "|";
		}
		cout << i  << "|";
		cout << endl;
		cout << "  -------------------" << endl;
	}


}


void Ship4()
{
	char move;
	int x = 0;
	int y = 0;
	int coup = 0;
	system("cls");
	OutputMass();
	do {
		for (int i = 0; i < 4; i++)
		{
			pole1[x][y + i] = 'O';
		}
		cin >> move;
		switch (move)
		{
		case 's':
			PoleTemp();
			if (x == 9)
			{
				for (int i = 0; i < 4; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (x < 9)
			{
				for (int i = 0; i < 4; i++)
				{
					pole1[x + 1][y + i] = 'O';
				}
				system("cls");
				OutputMass();
				x++;
			}
			break;
		case 'w':
			PoleTemp();
			if (x == 0) {
				for (int i = 0; i < 4; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (x > 0)
			{
				for (int i = 0; i < 4; i++)
				{
					pole1[x - 1][y + i] = 'O';
				}
				system("cls");
				OutputMass();
				x--;
			}
			break;
		case 'd':
			PoleTemp();
			if (y == 6)
			{
				for (int i = 0; i < 4; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (y < 6)
			{
				for (int i = 0; i < 4; i++)
				{
					pole1[x][y + i + 1] = 'O';
				}

				system("cls");
				OutputMass();
				y++;
			}
			break;
		case 'a':
			PoleTemp();
			if (y == 0)
			{
				for (int i = 0; i < 4; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (y > 0)
			{
				for (int i = 0; i < 4; i++)
				{
					pole1[x][y + i - 1] = 'O';
				}

				system("cls");
				OutputMass();
				y--;
			}
			break;
		case 'c':
			PoleTemp();
			if (x > 6)
			{
				x = 6;
			}
			for (int i = 0; i < 4; i++)
			{
				pole1[x + i][y] = 'O';
			}
			system("cls");
			OutputMass();
			coup = 0;
			while (coup < 1)
			{
				cin >> move;
				switch (move)
				{
				case 's':
					PoleTemp();
					if (x == 6)
					{
						for (int i = 0; i < 4; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (x < 6)
					{
						for (int i = 0; i < 4; i++)
						{
							pole1[x + i + 1][y] = 'O';
						}
						system("cls");
						OutputMass();
						x++;
					}
					break;
				case 'w':
					PoleTemp();
					if (x == 0)
					{
						for (int i = 0; i < 4; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (x > 0)
					{
						for (int i = 0; i < 4; i++)
						{
							pole1[x + i - 1][y] = 'O';
						}
						system("cls");
						OutputMass();
						x--;
					}
					break;
				case 'd':
					PoleTemp();
					if (y == 9)
					{
						for (int i = 0; i < 4; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (y < 9)
					{
						for (int i = 0; i < 4; i++)
						{
							pole1[x + i][y + 1] = 'O';
						}
						system("cls");
						OutputMass();
						y++;
					}
					break;
				case 'a':
					PoleTemp();
					if (y == 0)
					{
						for (int i = 0; i < 4; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (y > 0)
					{
						for (int i = 0; i < 4; i++)
						{
							pole1[x + i][y - 1] = 'O';
						}
						system("cls");
						OutputMass();
						y--;
					}
					break;
				case 'c':
					PoleTemp();
					if (y > 6)
					{
						y = 6;
					}
					for (int i = 0; i < 4; i++)
					{
						pole1[x][y + i] = 'O';
					}
					system("cls");
					OutputMass();
					coup = 1;
					break;
				case 'p':
					cout << "Next ship";
					for (int i = 0; i < 4; i++)
					{
						pole1Main[x + i][y] = 'X';
					}
					
					
						for (int i = x - 1; i < (x + 5); i++)
						{
							for (int j = y - 1; j < (y + 2); j++)
							{
								poleProverka[i+1][j+1] = 'v';

							}

						}
					
					
					
					coup = 1;
					system("cls");
					OutputMass();
				}
				system("cls");
				OutputMass();
			}
			break;
		case 'p':
			
			
			for (int i = 0; i < 4; i++)
			{
				pole1Main[x][y + i] = 'X';
			}

			for (int i = x - 1; i < (x + 2); i++)
			{
				for (int j = y - 1; j < (y + 5); j++)
				{
					poleProverka[i + 1][j + 1] = 'v';

				}

			}
			
		}
	} while (move != 'p');
}
void Ship3()
{
	char move;
	int x = 0;
	int y = 0;
	int coup = 0;
	do {
		for (int i = 0; i < 3; i++)
		{
			pole1[x][y + i] = 'O';
		}
		system("cls");
		OutputMass();
		cin >> move;
		switch (move)
		{
		case 's':
			PoleTemp();
			system("cls");
			OutputMass();
			if (x == 9)
			{
				for (int i = 0; i < 3; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (x < 9)
			{
				for (int i = 0; i < 3; i++)
				{
					pole1[x + 1][y + i] = 'O';
				}
				system("cls");
				OutputMass();
				x++;
			}
			break;
		case 'w':
			PoleTemp();
			if (x == 0) {
				for (int i = 0; i < 3; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (x > 0)
			{
				for (int i = 0; i < 3; i++)
				{
					pole1[x - 1][y + i] = 'O';
				}
				system("cls");
				OutputMass();
				x--;
			}
			break;
		case 'd':
			PoleTemp();
			if (y == 7)
			{
				for (int i = 0; i < 3; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (y < 7)
			{
				for (int i = 0; i < 3; i++)
				{
					pole1[x][y + i + 1] = 'O';
				}

				system("cls");
				OutputMass();
				y++;
			}
			break;
		case 'a':
			PoleTemp();
			if (y == 0)
			{
				for (int i = 0; i < 3; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (y > 0)
			{
				for (int i = 0; i < 3; i++)
				{
					pole1[x][y + i - 1] = 'O';
				}

				system("cls");
				OutputMass();
				y--;
			}
			break;
		case 'c':
			PoleTemp();
			if (x > 7)
			{
				x = 7;
			}
			for (int i = 0; i < 3; i++)
			{
				pole1[x + i][y] = 'O';
			}
			system("cls");
			OutputMass();
			coup = 0;
			while (coup < 1)
			{
				system("cls");
				OutputMass();
				cin >> move;
				switch (move)
				{
				case 's':
					PoleTemp();
					if (x == 7)
					{
						for (int i = 0; i < 3; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (x < 7)
					{
						for (int i = 0; i < 3; i++)
						{
							pole1[x + i + 1][y] = 'O';
						}
						system("cls");
						OutputMass();
						x++;
					}
					break;
				case 'w':
					PoleTemp();
					if (x == 0)
					{
						for (int i = 0; i < 3; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (x > 0)
					{
						for (int i = 0; i < 3; i++)
						{
							pole1[x + i - 1][y] = 'O';
						}
						system("cls");
						OutputMass();
						x--;
					}
					break;
				case 'd':
					PoleTemp();
					if (y == 9)
					{
						for (int i = 0; i < 3; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (y < 9)
					{
						for (int i = 0; i < 3; i++)
						{
							pole1[x + i][y + 1] = 'O';
						}
						system("cls");
						OutputMass();
						y++;
					}
					break;
				case 'a':
					PoleTemp();
					if (y == 0)
					{
						for (int i = 0; i < 3; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (y > 0)
					{
						for (int i = 0; i < 3; i++)
						{
							pole1[x + i][y - 1] = 'O';
						}
						system("cls");
						OutputMass();
						y--;
					}
					break;
				case 'c':
					PoleTemp();
					if (y > 7)
					{
						y = 7;
					}
					for (int i = 0; i < 3; i++)
					{
						pole1[x][y + i] = 'O';
					}
					system("cls");
					OutputMass();
					coup = 1;
					break;
				case 'p':
					if ((poleProverka[x][y] == ' ') && (poleProverka[x + 1][y] == ' ') && (poleProverka[x + 2][y] == ' '))
					{
						cout << "Next ship";
						for (int i = 0; i < 3; i++)
						{
							pole1Main[x + i][y] = 'X';
						}
						coup = 1;
						system("cls");
						OutputMass();
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}

				}
				system("cls");
				OutputMass();
			}
			break;
		case 'p':
			if ((poleProverka[x][y] == ' ') && (poleProverka[x][y + 1] == ' ') && (poleProverka[x][y + 2] == ' '))
			{
				cout << "Next ship";
				for (int i = 0; i < 3; i++)
				{
					pole1Main[x][y + i] = 'X';
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					pole1[x][y + i] = 'O';
				}
				move = ' ';
			}
			system("cls");
		}
		OutputMass();
	} while (move != 'p');
}
void Ship2()
{
	char move;
	int x = 0;
	int y = 0;
	int coup = 0;
	do {
		for (int i = 0; i < 2; i++)
		{
			pole1[x][y + i] = 'O';
		}
		system("cls");
		OutputMass();
		cin >> move;
		switch (move)
		{
		case 's':
			PoleTemp();
			system("cls");
			OutputMass();
			if (x == 9)
			{
				for (int i = 0; i < 2; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (x < 9)
			{
				for (int i = 0; i < 2; i++)
				{
					pole1[x + 1][y + i] = 'O';
				}
				system("cls");
				OutputMass();
				x++;
			}
			break;
		case 'w':
			PoleTemp();
			if (x == 0) {
				for (int i = 0; i < 2; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (x > 0)
			{
				for (int i = 0; i < 2; i++)
				{
					pole1[x - 1][y + i] = 'O';
				}
				system("cls");
				OutputMass();
				x--;
			}
			break;
		case 'd':
			PoleTemp();
			if (y == 8)
			{
				for (int i = 0; i < 2; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (y < 8)
			{
				for (int i = 0; i < 2; i++)
				{
					pole1[x][y + i + 1] = 'O';
				}

				system("cls");
				OutputMass();
				y++;
			}
			break;
		case 'a':
			PoleTemp();
			if (y == 0)
			{
				for (int i = 0; i < 2; i++)
				{
					pole1[x][y + i] = 'O';
				}
			}
			if (y > 0)
			{
				for (int i = 0; i < 2; i++)
				{
					pole1[x][y + i - 1] = 'O';
				}

				system("cls");
				OutputMass();
				y--;
			}
			break;
		case 'c':
			PoleTemp();
			if (x > 8)
			{
				x = 8;
			}
			for (int i = 0; i < 2; i++)
			{
				pole1[x + i][y] = 'O';
			}
			system("cls");
			OutputMass();
			coup = 0;
			while (coup < 1)
			{
				system("cls");
				OutputMass();
				cin >> move;
				switch (move)
				{
				case 's':
					PoleTemp();
					if (x == 8)
					{
						for (int i = 0; i < 2; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (x < 8)
					{
						for (int i = 0; i < 2; i++)
						{
							pole1[x + i + 1][y] = 'O';
						}
						system("cls");
						OutputMass();
						x++;
					}
					break;
				case 'w':
					PoleTemp();
					if (x == 0)
					{
						for (int i = 0; i < 2; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (x > 0)
					{
						for (int i = 0; i < 2; i++)
						{
							pole1[x + i - 1][y] = 'O';
						}
						system("cls");
						OutputMass();
						x--;
					}
					break;
				case 'd':
					PoleTemp();
					if (y == 9)
					{
						for (int i = 0; i < 2; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (y < 9)
					{
						for (int i = 0; i < 2; i++)
						{
							pole1[x + i][y + 1] = 'O';
						}
						system("cls");
						OutputMass();
						y++;
					}
					break;
				case 'a':
					PoleTemp();
					if (y == 0)
					{
						for (int i = 0; i < 2; i++)
						{
							pole1[x + i][y] = 'O';
						}
					}
					if (y > 0)
					{
						for (int i = 0; i < 2; i++)
						{
							pole1[x + i][y - 1] = 'O';
						}
						system("cls");
						OutputMass();
						y--;
					}
					break;
				case 'c':
					PoleTemp();
					if (y > 8)
					{
						y = 8;
					}
					for (int i = 0; i < 2; i++)
					{
						pole1[x][y + i] = 'O';
					}
					system("cls");
					OutputMass();
					coup = 1;
					break;
				case 'p':
					cout << "Next ship";
					for (int i = 0; i < 2; i++)
					{
						pole1Main[x + i][y] = 'X';
					}
					coup = 1;
					system("cls");
					OutputMass();
				}
				system("cls");
				OutputMass();
			}break;
		case 'p':
			cout << "Next ship";
			for (int i = 0; i < 2; i++)
			{
				pole1Main[x][y + i] = 'X';
			}
			system("cls");
		}
		OutputMass();
	} while (move != 'p');
}
void Ship1()
{
	char move;
	int x = 0;
	int y = 0;
	int coup = 0;
	do {
		pole1[x][y] = 'O';
		system("cls");
		OutputMass();
		cin >> move;
		switch (move)
		{
		case 's':
			PoleTemp();
			system("cls");
			OutputMass();
			if (x == 9)
			{
				pole1[x][y] = 'O';
			}
			if (x < 9)
			{
				pole1[x + 1][y] = 'O';
				system("cls");
				OutputMass();
				x++;
			}
			break;
		case 'w':
			PoleTemp();
			if (x == 0)
			{
				pole1[x][y] = 'O';
			}
			if (x > 0)
			{
				pole1[x - 1][y] = 'O';

				system("cls");
				OutputMass();
				x--;
			}
			break;
		case 'd':
			PoleTemp();
			if (y == 9)
			{
				pole1[x][y] = 'O';
			}
			if (y < 9)
			{
				pole1[x][y + 1] = 'O';

				system("cls");
				OutputMass();
				y++;
			}
			break;
		case 'a':
			PoleTemp();
			if (y == 0)
			{
				pole1[x][y] = 'O';
			}
			if (y > 0)
			{
				pole1[x][y - 1] = 'O';

				system("cls");
				OutputMass();
				y--;
			}
			break;
		case 'p':
			cout << "Next ship";

			pole1Main[x][y] = 'X';

			system("cls");
		}
		OutputMass();
	} while (move != 'p');
}
int main()
{
	InputMass();
	OutputMass();

	system("pause");
	system("cls");
	int x = 0;
	int y = 0;
	for (int i = 0; i < 4; i++)
	{
		pole1[x][y + i] = 'O';
	}
	system("cls");
	OutputMass();
	Ship4();
	
	AlloutputMAss();
	OutputMass;
	system("pause");
	
	
}