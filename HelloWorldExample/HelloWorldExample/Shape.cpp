#include "Shape.h"

Shape::Shape(float width, float height)
{
	float m_width = width;
	float m_height = height;
}

Shape::~Shape()
{
}

float Shape::getWidth() const
{
	return m_width;
}

void Shape::setWidth(float width)
{
	m_width = width;
}

float Shape::getHeight() const
{
	return m_height;
}

void Shape::setHeight(float height)
{
	m_height = height;
}

float getArea() const {
	return m_height * m_width;
}