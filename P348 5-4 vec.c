#include <stdlib.h>
#include "vec.h"


/* Create vector of specified length */
vec *new_vec(size_t len)
{
    /* Allocate header structure */
    vec *result = (vec *) malloc(sizeof(vec));
    if (!result)
        return NULL;  /* Couldn't allocate storage */
    result->len = len;
    data_t *data = NULL;
    if (len > 0) {
        data = (data_t *) calloc(len, sizeof(data_t));
	if (!data) {
	    free((void *) result);
 	    return NULL; /* Couldn't allocate storage */
	}
    }
    /* data will either be NULL or allocated array */
    result->data = data;
    return result;
}

/* Free storage used by vector */
void free_vec(vec *v) {
    if (v->data)
	free(v->data);
    free(v);
}

/*
 * Retrieve vector element and store at dest.
 * Return 0 (out of bounds) or 1 (successful)
 */
int get_vec_element(vec *v, size_t index, data_t *dest)
{
    if (index >= v->len)
	return 0;
    *dest = v->data[index];
    return 1;
}

/* Return length of vector */
size_t vec_length(vec *v)
{
    return v->len;
}


data_t *get_vec_start(vec *v)
{
    return v->data;
}

/*
 * Set vector element.
 * Return 0 (out of bounds) or 1 (successful)
 */
int set_vec_element(vec *v, size_t index, data_t val)
{
    if (index >= v->len)
	return 0;
    v->data[index] = val;
    return 1;
}
