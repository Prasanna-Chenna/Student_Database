#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

#pragma pack(1)
typedef struct DOB
{
        int day;
        int month;
        int year;
}dob;
typedef struct ADDRESS
{
        int flatno;
        char area[20];
        char city[20];
        char state[20];
        char pincode[10];
}add;
typedef struct student
{
        char name[20];
        add a;
        dob d;
        int roll;
        float marks;
}ST;

void *insert(ST *);
void print(ST *);
void search(ST *);
void modify(ST *);
void sort(ST *);
void *delete(ST *);
void save(ST *);
void* syncfromfile(ST *);
