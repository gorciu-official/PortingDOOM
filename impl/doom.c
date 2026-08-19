#define DOOM_IMPLEMENTATION

#define DOOM_IMPLEMENT_PRINT
#define DOOM_IMPLEMENT_MALLOC
#define DOOM_IMPLEMENT_FILE_IO
#define DOOM_IMPLEMENT_EXIT

#include "../PureDOOM.h"

#include <string.h>

char* better_getenv(const char *name) {
    if (strcmp(name, "HOME") == 0) {
        return "";
    }
    return NULL;
}

int main(int argc, char** argv)
{
    doom_set_getenv(better_getenv);
    doom_init(argc, argv, 0);
    while (true)
    {
        doom_update();
    }
}
