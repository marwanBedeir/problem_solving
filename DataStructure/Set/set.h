#ifndef SET_H_INCLUDED
#define SET_H_INCLUDED
#define Max 20
typedef int entry_type;
typedef struct{
    entry_type elems[Max];
    int top;
}Set
Set intersection(Set a,Set b);
void subtreat_element(Set*ps,entry_type e);
void add_ele(Set*ps,entry_type e);
int cardinality(Set s);
int is_in_set(Set s,entry_type e);
#endif // SET_H_INCLUDED
