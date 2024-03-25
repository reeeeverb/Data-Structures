#include <iostream>
using namespace std;

unsigned long hash_function(char* j)
{
    unsigned long i = 0;

    for (int j = 0; str[j]; j++)
        i += str[j];

    return i % CAPACITY;
}

struct HT_Element{
    char* key;
    char* value;
};

struct Direct_Access{
    HT_Element** items;
    int size;
    int count;
};

HT_Element* create_item(char* key, char value)
{
    HT_Element* item = (HT_Element*) malloc(sizeof(HT_Element));
    item->key = (char*) malloc(strlen(key)+1);
    item->value = (char*) malloc(strlen(value)+1);
    strcpy(item->key, key);
    strcpy(item->value, value);
    return item;
}

Direct_Access create_table(int size)
{
    Direct_Access* table = (Direct_Access*) malloc(sizeof(Direct_Access));
    table->size = size;
    table->count = 0;
    table->items = (HT_Element**) calloc(table->size, sizeof(HT_Element*));

    for(int i = 0; i < table->size; i++)
        table->items[i] = NULL;

    return table;
}

void free_element(HT_Element* item)
{
    free(item->key);
    free(item->value);
    free(item);
}

void free_table(HT_Table* table)
{
    for(int i = 0; i < table->size; i++){
        item = table->items[i];
        if item != NULL:
            free_element(item);
    }
    free(table->items);
    free(table);
}

void print_table(HT_Table* table)
{
    printf("\n Hash Table\n---------------------\n");

    for (int i = 0; i < table->size; i++){
        if(table->items[i]){
            printf("Index:%d, Key:%s, Value:%s\n", i, table->items[i] -> key, table->items[i]->value);
        }
    }

    printf("---------------------\n\n");
}

void ht_insert(HT_Table* table,char* key,char* value)
{
    HT_Element* item = create_element(key,value);
    int index = hash_function(item->key);
    if (index < table->size && index > -1)
        HT_Element* current_item = table->items[index];
    else{
        printf("Invalid index");
        free(item);
        return;
    }
    if (current_item == NULL){
        if (table->count == table->size){
            printf("Hash Table is full");
            free(item);
            return;
        }

        table->items[index] = item;
        table->count++;
    } else {
        // Handle Collisions 
    }
}












