int power(int x)
{
    // Input guaranteed to be non-negative
    int output = 0;

    if (x == 0)
    {
        return output;
    }

    // First pass
    output += 1;
    x -= 1;

    while (x > 0)
    {
        output += output;
        x -= 1;
    }

    // The algorithm computes 2^(x - 1) except when x = 0, returning 0 then
    return output;
}