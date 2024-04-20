#include <iostream>
#include <cstring>
bool isSubString(const char *a, const char *b)
{
    if (strlen(a) < strlen(b))
        return false;
    else
    {
        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] == b[0])
            {
                int j = 0;
                while (a[i + j] == b[j] && j < strlen(b))
                    j++;
                if (j == strlen(b))
                    return true;
            }
        }
        return false;
    }
}
int main()
{
    const char *a = "Hello world!";

    const char *b = "wor";
    //std::cout << strlen(a) << ", " << strlen(b) << "\n";

    if (isSubString(a, b))
        std::cout << "String b is substring of a\n";

    else
        std::cout << "String b is not substring of a\n";
}