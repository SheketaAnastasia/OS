
typedef struct __ArrayList ArrayList;

typedef struct __ArrayList{
    int* arr;
    int lenght;
    int realSize;
    
} ArrayList;

void add (ArrayList* list, int item);
int size (ArrayList* list);
void insert(ArrayList* list, int index, int item);
void removeItem(ArrayList* list, int index);
void set(ArrayList* list, int index, int item);
int get(ArrayList* list, int index);
ArrayList* newArrayList();