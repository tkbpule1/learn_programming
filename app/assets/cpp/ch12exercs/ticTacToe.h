class ticTacToe
{
public:
  void getPlayerOneLetter();
  // Function to get playerOne's letter of choice (X or O);
  // Sets playerOne's letter to their choice;

  void setPlayerTwoLetter();
  // Function to set playerTwo's letter;

  void getPlayerOneLocation();
  // Function to get the position of the letter on the board for playerOne
  // Postcondition: array[x][y] = X/O

  void getPlayerTwoLocation();
  // Function to get the position of the letter on the board for playerTwo
  // Postcondition: array[x][y] = X/O

  void print();
  // Print the contents of the board;

  bool determineWinner();

  bool checkValidity(int, int);
  // Function to check whether the move is valid;

  void updateBoard(char, int, int);
  // Update array[i][j] with char;

  bool gameOver();
  // If the game is a tie, output "Draw"


  ticTacToe();
  // Default constructor;
  // Sets playerOneLetter = X; Sets playerTwoLetter = O;
  // Set array[i][j] to null char for all i & j

private:
  char array[3][3];
  char playerOneLetter;
  char playerTwoLetter;
  int col;
  int row;
};
