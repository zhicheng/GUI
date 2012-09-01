#ifndef __VIEW_H__
#define __VIEW_H__

#include "Geometry.h"

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


#endif /* __VIEW_H__ */

