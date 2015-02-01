inline bool isLegal(int move, const vector<char>& board)
{
	return (board[move] == EMPTY)
}

int humanMove(const vector<char>& board, char human){
	int move = askNumber("Where will you move?",(board.size()-1));

	while (!isLegal(move,board)){
		cout << "\nThat square is already occupied, foolish human.\n";
		move = askNumber("Where will you move?",board,size()-1);
	}

	cout << "Fine...\n";

	return move;
}