#pragma once
#ifndef _DS_RANGE_H_
#define _DS_RANGE_H_

typedef struct {
    void * begin, * end;
} ds_range;

#define dsIterRange(T, it, range) \
    for(T * it = range.begin; it != range.end; it++)

#endif // _DS_RANGE_H_