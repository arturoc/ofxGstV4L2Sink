/*
 * ofxGstV4L2Sink.h
 *
 *  Created on: 04/03/2012
 *      Author: arturo
 */

#ifndef OFXGSTV4L2SINK_H_
#define OFXGSTV4L2SINK_H_

#include "ofPixels.h"

#include "ofGstUtils.h"
#include <gst/app/gstappsrc.h>


class ofxGstV4L2Sink {
public:
	ofxGstV4L2Sink();
	virtual ~ofxGstV4L2Sink();

    ofPixels pixels;
	void setup();
	void update(ofPixels & pixels);

private:
	ofGstVideoUtils gst;
	GstAppSrc * gstSrc;
};

#endif /* OFXGSTV4L2SINK_H_ */
