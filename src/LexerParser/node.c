#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "node.h"
#include "parser.tab.h"

struct Node* new_node(char *s, int length, ...) {
	struct Node *r = (struct Node*)malloc(sizeof(struct Node));
	r-> content = (char*)malloc(strlen(s) + 1);
	strcpy(r-> content, s);
	r->length = length;
	r->children = (struct Node**)malloc(sizeof(struct Node*)*length);
	int i;
	va_list list;
	va_start(list, length);
	for (i = 0; i < length; i++) {
		r->children[i] = va_arg(list, struct Node*);
	}
	return r;
}

void Print(struct Node *r, int level) {
	if (r == NULL) {
		return;
	}
	int i;
	for (i = 0; i < level; i++) {
		printf("---");
	}
	printf("%s\n", r-> content);
	for (i = 0; i < r->length; i++) {
		Print(r->children[i], level + 1);
	}
	return;
}


