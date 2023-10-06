/*
** EPITECH PROJECT, 2023
** MY_QUEENS
** File description:
** Function that compute recursively and returns the number
** of possible ways to place n queens on a nxn chessboard
** without them being able to run into each other in a single move.
*/
int validate(int **board, int n, int row, int col)
{
    int i;
    int j;

    for (i = 0; i < col; i++) {
        if (board[row][i])
            return 0;
    }
    j = col;
    for (i = row; i >= 0 && j >= 0; i--) {
        if (board[i][j--])
            return 0;
    }
    j = col;
    for (i = row; j >= 0 && i < n; i++) {
        if (board[i][j--])
            return 0;
    }
    return 1;
}

int iterate_cols(int **board, int n, int queens)
{
    int acc = 0;

    if (queens == n) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (validate(board, n, i, queens)) {
            board[i][queens] = 1;
            acc += iterate_cols(board, n, queens + 1);
            board[i][queens] = 0;
        }
    }
    return acc;
}

int count_valid_queens_placements(int n)
{
    int board[1000][1000];
    int i;
    int j;
    int res;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            board[i][j] = 0;
        }
    }
    res = iterate_cols(board, n, 0);
    return res;
}
