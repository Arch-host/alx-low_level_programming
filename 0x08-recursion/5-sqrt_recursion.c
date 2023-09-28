int _sqrt_recursion(int n)
{
    int start = 1, end = n, result;

    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid * mid == n)
            return mid;
        if (mid * mid < n)
        {
            start = mid + 1;
            result = mid;
        }
        else
            end = mid - 1;
    }
    return result;
}

