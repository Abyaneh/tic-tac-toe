#include <iostream>
using namespace std;

#define N 4

// First Player: 'x'
// Second Playet: 'o'

void printBoard(char board[][N]);
void initializeBoard(char board[][N]);
int getMove(char board[][N]);
bool checkWinner(char board[][N]);
bool checkRow(char board[][N]);
bool checkColumn(char board[][N]);
bool checkDiagonal(char board[][N]);
void printBoardAndMoveNumbers(char board[][N]);


int main()
{
	char first = 'X';
	char second = 'O';
	char board[N][N];
	int turn = 1; //turn=1 for first player and turn=2 for srcond player
	int move; 
	int x, y;
	int moveCounter = 0;
	initializeBoard(board);

	cout << "\n     Tic Tac Toe Game\n";
    cout << "Player 1 (X)  -  Player 2 (O)\n\n\n";
	//printBoard(board);
	printBoardAndMoveNumbers(board);

	while(1){
		if(turn == 1){
			cout << "Player 1 (X)\n\n";
			move = getMove(board);
			x = (move-1) / N;
			y = (move-1) % N;
			board[x][y] = first;
			moveCounter += 1;
			//printBoard(board);
			printBoardAndMoveNumbers(board);

			// check if this player won
			if (checkWinner(board)){
				cout << "Player 1 won!\n";
				break;
			}

			turn = 2; // change the turn
		}

		else if(turn == 2){
			cout << "Player 2 (O)\n\n";
			move = getMove(board);
			x = (move-1) / N;
			y = (move-1) % N;
			board[x][y] = second;
			moveCounter += 1;
			//printBoard(board);
			printBoardAndMoveNumbers(board);

			// check if this player won
			if (checkWinner(board)){
				cout << "Player 2 won!\n";
				break;
			}

			turn = 1; // change the turn
		}

		// check if they have draw
		if (moveCounter == N * N){
			cout << "Draw!\n";
			break;
		}
		
	}
	
	return 0;
}


// initialize the board with numbers 1-16 as a guide for moving
void initializeBoard(char board[][N])
{
	int c = 0; // counter
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++){
			board[i][j] = ' ';
		}
	}
}


// print the current board
void printBoard(char board[][N])
{
    cout << "     |     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |  " << board[0][3]<< endl;
    cout << "_____|_____|_____|_____" << endl;
    cout << "     |     |     |     " << endl;
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |  " << board[1][3]<< endl;
    cout << "_____|_____|_____|_____" << endl;
    cout << "     |     |     |     " << endl;
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |  " << board[2][3]<< endl;
    cout << "_____|_____|_____|_____" << endl;
    cout << "     |     |     |     " << endl;
    cout << "  " << board[3][0] << "  |  " << board[3][1] << "  |  " << board[3][2] << "  |  " << board[3][3]<< endl;
    cout << "     |     |     |     " << endl<< endl;
}

// print the current board
void printBoardAndMoveNumbers(char board[][N])
{
    cout << "     |     |     |     " << "               " << "     |     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |  " << board[0][3] << "                 "
	     << "  " << "1" << "  |  " << "2" << "  |  " << "3" << "  |  " << "4" << endl;
    cout << "_____|_____|_____|_____" << "               " << "_____|_____|_____|_____" << endl;
    cout << "     |     |     |     " << "               " << "     |     |     |     " << endl;
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |  " << board[1][3] << "                 "
	     << "  " << "5" << "  |  " << "6" << "  |  " << "7" << "  |  " << "8" << endl;
    cout << "_____|_____|_____|_____" << "               " << "_____|_____|_____|_____" << endl;
    cout << "     |     |     |     " << "               " << "     |     |     |     " << endl;
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |  " << board[2][3] << "                 "
	     << "  " << "9" << "  | " << "10" << "  | " << "11" << "  | " << "12" << endl;
    cout << "_____|_____|_____|_____" << "               " << "_____|_____|_____|_____" << endl;
    cout << "     |     |     |     " << "               " << "     |     |     |     " << endl;
    cout << "  " << board[3][0] << "  |  " << board[3][1] << "  |  " << board[3][2] << "  |  " << board[3][3] << "                 "
	     << " " << "13" << "  | " << "14" << "  | " << "15" << "  | " << "16" << endl;
    cout << "     |     |     |     " << "               " << "     |     |     |     " << endl << endl << endl;
}

int getMove(char board[][N]){
	int move;
	int x, y;
	bool notValid = true;
	while(notValid){
		cin >> move;
		// check out of range input
		if (move < 1 && move > 16){
			cout << "Error: out of range input!\n" << "please re-enter a number between 1 and 16.\n";
			continue;
		}

		// check repetetive input
		x = (move-1) / N;
		y = (move-1) % N;
		if (board[x][y] != ' '){
			cout << "Error: this cell is already occupied\n " << "plese re-enter a number between 1 and 16.3\n";
			continue;
		}

		notValid = false;
	}
	return move;
}

bool checkWinner(char board[][N]){
	return (checkRow(board) || checkColumn(board) || checkDiagonal(board));
}

// check if we have 3 in a row
bool checkRow(char board[][N]){

	// check for every row
	for(int i=0; i<N; i++){

		// check the first three
		if (board[i][0] == board[i][1] &&
			board[i][1] == board[i][2] &&
			board[i][0] != ' ')
			return true;

		// check the last three
		if (board[i][1] == board[i][2] &&
			board[i][2] == board[i][3] &&
			board[i][1] != ' ')
			return true;
	}
	return false;
}

// check if we have 3 in a column
bool checkColumn(char board[][N]){

	// check for every column
	for(int i=0; i<N; i++){

		// check the first three
		if (board[0][i] == board[1][i] &&
			board[1][i] == board[2][i] &&
			board[0][i] != ' ')
			return true;

		// check the last three
		if (board[1][i] == board[2][i] &&
			board[2][i] == board[3][i] &&
			board[1][i] != ' ')
			return true;
	}
	return false;
}

// check if we have 3 in a diagonal
bool checkDiagonal(char board[][N]){
	// check all conditions
	if (board[0][0] == board[1][1] &&
		board[1][1] == board[2][2] &&
		board[0][0] != ' ')
		return true;

	if (board[1][1] == board[2][2] &&
		board[2][2] == board[3][3] &&
		board[3][3] != ' ')
		return true;

	if (board[1][0] == board[2][1] &&
		board[2][1] == board[3][2] &&
		board[1][0] != ' ')
		return true;

	if (board[0][1] == board[1][2] &&
		board[1][2] == board[2][3] &&
		board[0][1] != ' ')
		return true;

	if (board[0][3] == board[1][2] &&
		board[1][2] == board[2][1] &&
		board[0][3] != ' ')
		return true;
	
	if (board[1][2] == board[2][1] &&
		board[2][1] == board[3][0] &&
		board[3][0] != ' ')
		return true;
		
	if (board[0][2] == board[1][1] &&
		board[1][1] == board[2][0] &&
		board[0][2] != ' ')
		return true;

	if (board[1][3] == board[2][2] &&
		board[2][2] == board[3][1] &&
		board[1][3] != ' ')
		return true;

	return false;
}
