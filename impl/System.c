#include "System.h"
#include <assert.h>

/*stdout 구현부입니다.*/
void __print(const char* s)
{
    printf(s);
}
void __println(const char* s)
{
    printf(s);
    putchar('\n');
}

void __gc()
{
    puts("ni");
}


/*stdin 구현부입니다.*/
void __error(const char* s)
{
    fprintf(stderr,s);
}
void __errorln(const char* s)
{
    fprintf(stderr, "%s\n", s);
}
void __errorf(const char* s, ...)
{
    "나중에 구현할것임";
    assert(0);
}
void __errorc(int c)
{
    fputc(c, stderr);
}


struct __system_t System = {

    .out= {
        .print=__print, 
        .println=__println,
        .printf=(void(*)(const char*,...))printf,

        .write=(void(*)(int))putchar
    },

    .in={
        .read = getchar
    },

    .err={
        .print = __error,
        .println = __errorln,
        .printf = __errorf,

        .write = __errorc
    },

    .gc = __gc,
    .exit = exit
};