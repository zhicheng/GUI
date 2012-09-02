#ifndef __VIEW_HPP__
#define __VIEW_HPP__

#include "Geometry.hpp"

namespace GUI {

class View {
public:
	Rect  frame;
	Color backgroundColor;

	View(Rect frame_) : frame(frame_) {}
	
	void addSubview(View &subview);
	void removeFromSuperview();

private:
	//std::list<View> subviews;
};


}; /* namespace GUI */


#endif /* __VIEW_HPP__ */

