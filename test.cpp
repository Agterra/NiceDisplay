#include "NiceDisplay.h"
#include <string>
#include <cstdio>
#include <cassert>

int main()
{
    char *title = (char *)malloc(strlen("Bonjour"));
    strcpy(title, "Bonjour");

    char * a1 = niceDisplayTitle(*title, 20, *"#", *"[]");
    assert(strcmp(a1, "####[ Bonjour ]#####") == 0);

    free(title);
    title = (char *)malloc(strlen("HA"));
    strcpy(title, "HA");

    char *a2 = niceDisplayTitle(*title, 20, *"-", *"<>");
    assert(strcmp(a2, "-------< HA >-------") == 0);

    free(title);
    title = (char *)malloc(strlen("HAHAHAHAHAHA"));
    strcpy(title, "HAHAHAHAHAHA");
    
    char *a3 = niceDisplayTitle(*title, 20, *"*");
    assert(strcmp(a3, "*** HAHAHAHAHAHA ***") == 0);
}

