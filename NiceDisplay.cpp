#include "NiceDisplay.h"

char *niceDisplayTitle(const char &title, const int &length, const char &lineSymbol, const char &titleSymbol)
{
    char *_returnedTitle = (char *)malloc(length * sizeof(char));
    char *_title = nullptr;

    char *_titleSymbols = 0;
    char *_firstTitleSymbol = 0;
    char *_secondTitleSymbol = 0;

    if (titleSymbol != 0 && strlen(&titleSymbol) == 2)
    {

        _titleSymbols = (char *)malloc(strlen(&titleSymbol));
        strcpy(_titleSymbols, &titleSymbol);

        _firstTitleSymbol = (char *)malloc(sizeof(char));
        *_firstTitleSymbol = _titleSymbols[0];

        _secondTitleSymbol = (char *)malloc(sizeof(char));
        *_secondTitleSymbol = _titleSymbols[1];

        _title = (char *)malloc(strlen(&title) + 4);

        strcat(_title, _firstTitleSymbol);
        strcat(_title, " ");
        strcat(_title, &title);
        strcat(_title, " ");
        strcat(_title, _secondTitleSymbol);
    }
    else
    {
        _title = (char *)malloc(strlen(&title) + 2);
        strcat(_title, " ");
        strcat(_title, &title);
        strcat(_title, " ");
    }

    int titleLength = strlen(_title);

    if (titleLength == length)
    {
        strcpy(_returnedTitle, _title);
    }
    else
    {
        int symbolNumber = (length - titleLength) / 2;

        for (int i = 0; i < symbolNumber; i++)
        {
            strcat(_returnedTitle, &lineSymbol);
        }

        strcat(_returnedTitle, _title);

        for (int i = 0; i < symbolNumber; i++)
        {
            strcat(_returnedTitle, &lineSymbol);
        }

        if ((length - titleLength) % 2 != 0 && symbolNumber + 1 + titleLength < length)
        {
            strcat(_returnedTitle, &lineSymbol);
        }
    }

    return _returnedTitle;
}