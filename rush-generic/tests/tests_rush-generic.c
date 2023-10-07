struct square_parts {
    char corner_1;
    char corner_2;
    char corner_3;
    char corner_4;
    char body;
};

int main()
{
    struct square_parts square;
    square.body = '*';
    square.corner_1 = 'A';
    square.corner_2 = 'B';
    square.corner_3 = 'C';
    square.corner_4 = 'D';
    rush_generic(0, 0, &square);
    rush_generic(0, 1, &square);
    rush_generic(1, 0, &square);
    rush_generic(1, 1, &square);
    rush_generic(1, 5, &square);
    rush_generic(5, 1, &square);
    rush_generic(2, 3, &square);
    rush_generic(3, 4, &square);
    rush_generic(6, 5, &square);
    rush_generic(6, -1, &square);
    rush_generic(-2, 5, &square);
}
