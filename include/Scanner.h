#pragma once

#include <stdio.h>
#include <string.h>

enum __radix_t;
struct Scanner;
typedef struct Scanner Scanner;

struct __stdout_t;
struct __stdin_t;

typedef signed char sbyte;
typedef unsigned char ubyte;

enum __radix_t
{
    BIN, //2진수
    OCT, //8진수
    DEC, //10진수. 디폴트
    HEX //16진수
};

struct Scanner
{
    enum __radix_t _radix;

    //나중에 구현할거임
    void(*useRadix)(int);
    int(*radix)();

    char*(*next)();
    char*(*nextLine)();
    sbyte (*nextSByte)();
    ubyte (*nextUByte)();
    short (*nextShort)();
    unsigned short(*nextUShort)();
    int(*nextInt)();
    unsigned int(*nextUInt)();
    long (*nextLong)();
    unsigned long (*nextULong)();
    long long(*nextLLong)();
    unsigned long long (*nextULLong)();
    float(*nextFloat)();
    double(*nextDouble)();
    long double (*nextLDouble)();
};

//생성자입니다.
struct Scanner new_Scanner(struct __stdin_t);