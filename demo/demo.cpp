#include "RenderWindowGLFW.h"
#include "RendererOpenGL1.h"

int main(int argc, char *argv[])
{
    std::unique_ptr<rsmz::RendererOpenGL1> renderer = std::make_unique<rsmz::RendererOpenGL1>();;
    rsmz::RenderWindowGLFW::instance().setRenderer(renderer.get());
    rsmz::RenderWindowGLFW::instance().init(1024, 768);
    rsmz::RenderWindowGLFW::instance().run();

    return 0;
}

