#ifndef __GEOMETRY_HPP__
#define __GEOMETRY_HPP__


namespace GUI {

class Point {
public:
	float x, y;

	Point(float x_=0, float y_=0) : x(x_), y(y_) 
	{}
	
	bool operator== (const Point &rhs) const
	{ return (x == rhs.x && y == rhs.y); }
};

class Size {
public:
	float width, height;

	Size(float width_=0, float height_=0) 
	: width(width_), height(height_) {}

	bool operator== (const Size &rhs) const
	{ return (width == rhs.width && height == rhs.height); }
};

class Rect {
public:
	Point origin;
	Size  size;

	Rect(float x_=0, float y_=0, float width_=0, float height_=0) 
	: origin(x_, y_), size(width_, height) {}

	bool operator== (const Rect &rhs) const
	{ return (origin == rhs.origin && size == rhs.size); }

};

}; /* namespace GUI */


#endif /* __GEOMETRY_HPP__ */

