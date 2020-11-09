#pragma once

#include "CanvasPoint.h"
#include <iostream>
#include <array>
#include "Colour.h"

struct CanvasTriangle {
	std::array<CanvasPoint, 3> vertices{};

	CanvasTriangle();
	CanvasTriangle(const CanvasPoint &v0, const CanvasPoint &v1, const CanvasPoint &v2);
	CanvasPoint &v0();
	CanvasPoint &v1();
	CanvasPoint &v2();
	CanvasPoint operator[](size_t i) const;
	CanvasPoint &operator[](size_t i);
	friend std::ostream &operator<<(std::ostream &os, const CanvasTriangle &triangle);
};

std::ostream &operator<<(std::ostream &os, const CanvasTriangle &triangle);