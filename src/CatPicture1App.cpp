#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPicture1App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
private:
	float brightness;
};

void CatPicture1App::setup()
{
	brightness = 0.0f;
}

void CatPicture1App::mouseDown( MouseEvent event )
{
}

void CatPicture1App::update()
{
	brightness = brightness + 0.01f;
	if(brightness > 1.0f){
		brightness = 0.0f;
	}
}

void CatPicture1App::draw()
{
	// clear out the window with black
	gl::clear( Color( brightness, brightness, brightness ) ); 
}

CINDER_APP_BASIC( CatPicture1App, RendererGl )
