#include "Triangle.h"

Triangle::Triangle(float width, float height)
{
	float m_width = width;
	float m_height = height;
}

Triangle::~Triangle()
{
}

float Triangle::getArea() const
{
	float area = (m_width * m_height) / 2;
	return area;
}
