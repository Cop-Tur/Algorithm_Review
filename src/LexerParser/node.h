#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

struct Node {
	char *content;
	int length;
	int line;
	struct Node **children;
};

struct Node* new_node(char *s, int length, ...);

void Print(struct Node *r, int level);