int power(int x)
{
    // Input guaranteed to be non-negative
    if (x == 0)
    {
        return 0;
    }

    int output = 1;

    while (x > 0)
    {
        output += output;
        x = x - 1;
    }

    return output;
}