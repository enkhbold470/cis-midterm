bool isSequence(int x, int y, int z)
{
    // 	//true if x, y, z form a sequence like 3, 4, 5 or 2, 3, 6
    // 	//false if not a sequence
    int minVal = 0;
    int maxVal = 0;
    int midVal = 0;

    if (y < x && y < z)
    {
        minVal = y;
    }
    else
    {
        if (z < x)
        {
            minVal = z;
        }
        else
        {
            minVal = x;
        }
    }

    if (y > x && y > z)
    {
        maxVal = y;
    }
    else
    {
        if (z > x)
        {
            maxVal = z;
        }
        else
        {
            maxVal = x;
        }
    }

    midVal = x + y + z - minVal - maxVal;

    // Write to screen if the a, b, and c form a sequence
    // with a difference of 1 only like 2, 3, 4 and 10, 11, 12
    // but not 2, 4, 6.

    if (minVal + 1 == midVal && midVal + 1 == maxVal)
    {
        return true;
    }
    else
    {
        return false;
    }
}