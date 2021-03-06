#include <stdbool.h>
#include <ncurses.h>

#ifndef GRID_H
#define GRID_H

typedef struct Grid {
	unsigned int size;
	unsigned int width;
	bool* arr;
} Grid;

void initGrid(Grid* grid, unsigned int width, unsigned int height);

void clearGrid(Grid* grid);

void putPixel(Grid* grid, int x, int y);

void drawGrid(Grid* grid);

#endif
