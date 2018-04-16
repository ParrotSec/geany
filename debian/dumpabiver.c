#include "geany.h"
#include "plugindata.h"

int main()
{
    printf("GEANY_ABI=geany-abi-%d\nGEANY_API=geany-api-%d\n",
           GEANY_ABI_VERSION, GEANY_API_VERSION);
    return 0;
}
