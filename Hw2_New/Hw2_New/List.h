#ifndef List_h
#define List_h
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 260

typedef enum { FAILURE, SUCCESS } Result;
typedef struct Node_t NODE;

NODE*  link_create();
Result link_push(NODE* head, char* data);
void link_delete(NODE* head);
Result link_find_delete(NODE* head, char* name);

#endif //airpot.h