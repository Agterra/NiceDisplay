#include "NiceDisplay.h"

char *niceDisplayTitle(const char &title, const int &length)
{
    char *_returnedTitle = (char *)malloc(length * sizeof(char));
    char *_title = (char *)malloc(strlen(&title) + 4);

    strcat(_title, "< ");
    strcat(_title, &title);
    strcat(_title, " >");

    int titleLength = strlen(_title);

    if (titleLength == length)
    {
        strcpy(_returnedTitle, _title);
    }
    else
    {
        int starsNumber = (length - titleLength ) / 2;

        for (int i = 0; i < starsNumber; i++)
        {
            strcat(_returnedTitle, "-");
        }

        strcat(_returnedTitle, _title);

        for (int i = 0; i < starsNumber; i++)
        {
            strcat(_returnedTitle, "-");
        }

        if((length - titleLength) %2 != 0 && starsNumber + 1 + titleLength < length)
        {
            strcat(_returnedTitle, "-");
        }
    }

    return _returnedTitle;
}