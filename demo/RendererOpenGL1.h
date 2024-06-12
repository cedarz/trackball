#ifndef RSMZ_RENDEREROPENGL1_H
#define RSMZ_RENDEREROPENGL1_H

#include "Renderer.h"


namespace rsmz
{

class RendererOpenGL1 : public Renderer
{
public:
	RendererOpenGL1();
	virtual ~RendererOpenGL1();

	virtual void render();
	virtual void resize(int width, int height);

private:
	void renderAxes();
	void renderCenter();
	void renderClear();
	void renderCube();
	void renderGrid();
	void renderObjects();

protected:
    glm::mat4 mProjection;
};

} // end namespace rsmz

#endif // RSMZ_RENDEREROPENGL1_H
