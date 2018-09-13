#include "NiceDisplay.h"
#include <string>
#include <cstdio>
#include <cassert>

int main()
{
    char *title = (char *)malloc(strlen("Bonjour"));
    strcpy(title, "Bonjour");

    printf("\n%s", niceDisplayTitle(*title, 20, *"#", *"[]"));

    free(title);
    title = (char *)malloc(strlen("HA"));
    strcpy(title, "HA");
    printf("\n%s", niceDisplayTitle(*title, 20, *"-", *"<>"));

    free(title);
    title = (char *)malloc(strlen("HAHAHAHAHAHA"));
    strcpy(title, "HAHAHAHAHAHA");
    printf("\n%s", niceDisplayTitle(*title, 20, *"*"));
}

