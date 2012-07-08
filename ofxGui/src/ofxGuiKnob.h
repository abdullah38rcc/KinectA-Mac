/*
 *  ofxGuiKnob.h
 *  openFrameworks
 *
 *  Copyright 2008 alphakanal/Stefan Kirch.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

//	----------------------------------------------------------------------------------------------------

#ifndef OFX_GUI_KNOB
#define OFX_GUI_KNOB

//	----------------------------------------------------------------------------------------------------

#include "ofxGuiTypes.h"
#include "ofxGuiObject.h"

//	----------------------------------------------------------------------------------------------------

class ofxGuiKnob : public ofxGuiObject
	{
		
	public:
		
		ofxGuiKnob();
		
		void		init(int id, string name, int x, int y, int width, int height, float min, float max, float value, int display, int steps);
		
		void		setValue(float value);
		void		setRange(float min, float max);
		
		bool		update(int id, int task, void* data, int length);
		void		draw();
		
		bool		mouseDragged(int x, int y, int button);
		bool		mousePressed(int x, int y, int button);
		bool		mouseReleased(int x, int y, int button);
		
		void		buildFromXml();
		void		saveToXml();
		
		float		valueToFraction(float value);
		float		fractionToValue(float fraction);
				
		void		drawValueString(float x, float y, string text);

		float		mValue, mMinVal, mMaxVal, mValDlt;
		ofxPoint2f	mFirstHit;
	};

//	----------------------------------------------------------------------------------------------------

#endif

//	----------------------------------------------------------------------------------------------------
