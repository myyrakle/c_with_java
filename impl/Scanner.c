#include "Scanner.h"
#include "System.h"

/*Scanner 구현부입니다.*/
ubyte __nextUByte()
{
    sbyte num;
    scanf(" %hhu", &num);
    return num;
}
sbyte __nextSByte()
{
    ubyte num;
    scanf(" %hhu",&num);
    return num;
}

short __nextShort()
{
    short num;
    scanf(" %hd",&num);
    return num;
}
unsigned short __nextUShort()
{
    unsigned short num;
    scanf(" %hu", &num);
    return num;
}

int __nextInt()
{
    int num;
    scanf(" %d",&num);
    return num;
}
unsigned int __nextUInt()
{
    unsigned int num;
    scanf(" %u",&num);
    return num;
}

long __nextLong()
{
    long num;
    scanf(" %d", &num);
    return num;
}
unsigned long __nextULong()
{
    unsigned long num;
    scanf(" %d", &num);
    return num;
}

long long __nextLLong()
{
    long long num;
    scanf(" %lld",&num);
    return num;
}
unsigned long long __nextULLong()
{
    unsigned long long num;
    scanf(" %llu",&num);
    return num;
}

float __nextFloat()
{
    float num;
    scanf(" %f",&num);
    return num;
}
double __nextDouble()
{
    double num;
    scanf(" %lf", &num);
    return num;
}
long double __nextLDouble()
{
    long double num;
    scanf(" %llf", &num);
    return num;
}

char* __nextLine()
{
    enum{
        BUF_SIZE=1000
    };
    static char buf[BUF_SIZE];
    size_t index = 0;

    while(123456789)
    {
        char c = getchar();
        if(c=='\n'||c==EOF||c=='\r')
        {
            buf[index]='\0';
            break;
        }
        else
            buf[index]=c;

        index++;
    }

    //누수는 알아서 잘 처리하시오.
    char* ret = malloc(index+1);
    strncpy(ret, buf, index+1U);

    return ret;
}

//생성자입니다.
struct Scanner new_Scanner(struct __stdin_t __in)
{
    Scanner ret = {
        ._radix = DEC,
        .radix = NULL,
        .useRadix = NULL,

        .next = __nextLine,
        .nextLine = __nextLine,
        .nextSByte = __nextSByte,
        .nextUByte = __nextUByte,
        .nextShort = __nextShort,
        .nextUShort = __nextUShort,
        .nextInt = __nextInt,
        .nextUInt = __nextUInt,
        .nextLong = __nextLong,
        .nextULong = __nextULong,
        .nextLLong = __nextLLong,
        .nextULLong = __nextULLong,
        .nextFloat = __nextFloat,
        .nextDouble = __nextDouble,
        .nextLDouble = __nextLDouble
    };
    return ret;
}