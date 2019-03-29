#pragma once

#ifdef _MSC_VER
    #pragma warning(disable:4996)
#endif
#include <stdio.h>
#include <stdlib.h>

typedef signed char sbyte;
typedef unsigned char ubyte;

struct __system_t;
struct __stdout_t;
struct __stdin_t;
struct __stderr_t;

enum __radix_t;
struct Scanner;
typedef struct Scanner Scanner;

//전역변수입니다.
extern struct __system_t System;

//표준 출력입니다.
struct __stdout_t
{
    void(*print)(const char*);
    void(*println)(const char*);
    void(*printf)(const char*,...);

    void (*write)(int);
};
void __print(const char*);
void __println(const char*);

//표준 입력입니다.
struct __stdin_t
{
    int(*read)();
};

//표준 에러입니다.
struct __stderr_t
{
    void(*print)(const char*);
    void(*println)(const char*);
    void(*printf)(const char*,...);

    void (*write)(int);
};

struct __system_t
{
    struct __stdout_t out;
    struct __stdin_t in;
    struct __stderr_t err;

    void (*gc)();
    void (*exit)(int);
};



