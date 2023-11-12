#ifndef MAIN_H
#define MAIN_H
/**
 * struct list_s - list type
 *
 * @value: string
 * @x: length of string
 * @next: next
 */
typedef struct list_s
{
	char *value;
	int x;
	char *str;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
