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

	virtual void init();
	virtual void render();
	void renderAxes();
    void renderCenter();
	void renderClear();
	void renderCube();
	void renderGrid();
	void renderObjects();
	virtual void resize(int width, int height);

protected:
    glm::mat4 mProjection;
};

} // end namespace rsmz

#endif // RSMZ_RENDEREROPENGL1_H
