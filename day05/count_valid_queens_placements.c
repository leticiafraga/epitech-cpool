/*
** EPITECH PROJECT, 2023
** MY_QUEENS
** File description:
** Function that compute recursively and returns the number
** of possible ways to place n queens on a nxn chessboard
** without them being able to run into each other in a single move.
*/
static int check_row(int board[21][21], int row, int col)
{
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1)
            return 0;
    }
    return 1;
}

static int check_diag(int board[21][21], int n, int row, int col)
{
    int i;
    int j;

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

int validate(int board[21][21], int n, int row, int col)
{
    if (check_row(board, row, col) == 0)
        return 0;
    if (check_diag(board, n, row, col) == 0)
        return 0;
    return 1;
}

int iterate_cols(int board[21][21], int n, int queens)
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
    int board[21][21] = {0};

    if (n <= 0 || n >= 19)
        return 0;
    return iterate_cols(board, n, 0);
}
