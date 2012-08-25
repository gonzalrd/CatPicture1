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
	float red;
	float blue;
	float green;
};

void CatPicture1App::setup()
{
	brightness = 0.0f;
	red = 0.0f;
}

void CatPicture1App::mouseDown( MouseEvent event )
{
}

void CatPicture1App::update()
{
	red = (rand()/10000.0);
	green = (rand()/10000.0);
	blue = (rand()/10000.0);
	//brightness = brightness + 0.02f;
	//if(brightness > 1.0f){
		//brightness = 0.0f;
	//}
}

void CatPicture1App::draw()
{
	// clear out the window with black
	gl::clear( Color( red, green, blue ) ); 
}

CINDER_APP_BASIC( CatPicture1App, RendererGl )
