#ifndef __RAYTRACING_H
#define __RAYTRACING_H

#include "objects.h"
#include <stdint.h>

typedef struct ThreadSame{
    uint8_t *pixels;
    double *background_color;
    rectangular_node rectangulars;
    sphere_node spheres;
    light_node lights;
    const viewpoint *view;
    int width;
    int height;
    double *u;
    double *v;
    double *w;
    double *d;
    int factor;

}Threadsame;

typedef struct ThreadInside{
    int h1;
    int h2;
    Threadsame *p;
}Threadinside;

void raytracing(uint8_t *pixels, color background_color,
                rectangular_node rectangulars, sphere_node spheres,
                light_node lights, const viewpoint *view,
                int width, int height);
#endif
