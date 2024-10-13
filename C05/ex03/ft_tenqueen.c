#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_board(int *board)
{
    int i;
    for (i = 0; i < 10; i++)
        ft_putchar(board[i] + '0');
    ft_putchar('\n');
}

int     is_safe(int *board, int row, int col)
{
    int i;
    for (i = 0; i < col; i++)
    {
        if (board[i] == row || board[i] - i == row - col || board[i] + i == row + col)
            return (0);
    }
    return (1);
}

void    solve(int *board, int col, int *solutions)
{
    int row;
    if (col == 10)
    {
        print_board(board);
        (*solutions)++;
        return ;
    }
    for (row = 0; row < 10; row++)
    {
        if (is_safe(board, row, col))
        {
            board[col] = row;
            solve(board, col + 1, solutions);
        }
    }
}

int     ft_ten_queens_puzzle(void)
{
    int board[10];
    int solutions;

    solutions = 0;
    solve(board, 0, &solutions);
    return (solutions);
}

int main()
{
    int result = ft_ten_queens_puzzle();
    write(1, "Number of solutions: ", 21);
    char buffer[12];
    int len = 0;
    int num = result;
    if (num == 0)
        buffer[len++] = '0';
    while (num > 0)
    {
        buffer[len++] = (num % 10) + '0';
        num /= 10;
    }
    while (len > 0)
        write(1, &buffer[--len], 1);
    write(1, "\n", 1);
    return 0;
}
