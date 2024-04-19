#pragma once
#include "types.hpp"

#ifndef RECT_HPP
#define RECT_HPP

int DrawRect(Rect rect, Surface surface, Color color);

bool IsColliding(Rect RectA, Rect RectB);

Rect MoveRect(Rect rect, Coordinate coordinate);

Rect GoToRect(Rect rect, Coordinate coordinate);

#endif