#pragma once
#ifndef _STUDENT
#define _STUDENT

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <iostream>

struct Teacher
{
	char name[12];
	char sex[6];
	long num;
};
struct Teacher t[100];
struct Student
{
	int snum;
	char name[12];
	char sex[6];
	char proname[35];
	char type[4];
	char protype[6];
	char stuclass[12];
	long num;
	float grade;
};
struct Student s[100];
struct Student sing[100];
struct Student dance[100];
extern int samount;
extern int damount;
extern int menu_select();
extern void t_pro();
extern void s_pro();
extern void mark();
extern void show();
extern void rank();
extern void save();
#endif
