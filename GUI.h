/**
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *                    Version 2, December 2004
 *
 * Copyright (C) 2012 WEI Zhicheng <zhicheng1988@gmail.com>
 *
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *
 *           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *
 * 0. You just DO WHAT THE FUCK YOU WANT TO.
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details.
 **/

#ifndef __GUI_H__
#define __GUI_H__

namespace GUI {

class Point {
public:
	float x;
	float y;

	Point(float x_=0, float y_=0) : x(x_), y(y_) 
	{}
	
	bool operator== (const Point &rhs) const
	{ return (x == rhs.x && y == rhs.y); }
};

class Size {
public:
	float width;
	float height;

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

class View {
	Rect frame;
};


}; /* namespace GUI */



#endif /* __GUI_H__ */
