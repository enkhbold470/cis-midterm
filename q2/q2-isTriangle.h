
bool isTriangle(int x, int y, int z)
{
    // find sum and max of x, y, z
    // then check if (sum - max) > max return true
    // else return false
    int sum = x + y + z;
    int max = 0;

    max = x;
    if (max < y)
        max = y;
    if (max < z)
        max = z;

    if ((sum - max) > max)
    {
        return true;
    }
    else
    {
        return false;
    }
}