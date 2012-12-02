#pragma once

#include "ofMain.h"

class ofxPDF
{
public:
	
	void load(string path, int pagenumber = 1) { loadPDF(path, pagenumber); }
	void loadPDF(string path, int pagenumber = 1);
	
	inline float getWidth() { return width; }
	inline float getHeight() { return height; }
	
	size_t getNumPath() { return paths.size(); }
	
	ofPath & getPathAt(int n){
		return *paths[n];
	}
	
	void draw();
	
private:
	
	float width, height;
	
	typedef ofPtr<ofPath> ofPathRef;
	vector <ofPathRef> paths;

};