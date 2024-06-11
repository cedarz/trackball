#ifndef RSMZ_RENDERER_H
#define RSMZ_RENDERER_H

// #include <GL/glew.h>

#include "Camera.h"

namespace rsmz
{
class Renderer
{
public:
	Renderer();
	virtual ~Renderer();

	virtual void render() = 0;
    virtual void resize(int width, int height) = 0;
    virtual void init() = 0;

	void setCamera(Camera *c);
    const Camera* getCamera();

protected:
	Camera *mCamera;

}; // end class Renderer

} // end namespace rsmz

#endif // RSMZ_RENDERER_H
