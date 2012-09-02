#ifndef __COLOR_HPP__
#define __COLOR_HPP__

namespace GUI {

class Color {
public:
	float r,g,b;
	
	Color(float r_=0, float g_=0, float b_=0) 
	: r(r_), g(g_), b(b_) {}
};


}; /* namespace GUI */

#endif /* __COLOR_HPP__ */

