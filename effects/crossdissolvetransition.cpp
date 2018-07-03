#include "transition.h"

#include <QOpenGLFunctions>

CrossDissolveTransition::CrossDissolveTransition() {
    name = "Cross Dissolve";
}

void CrossDissolveTransition::process_transition(float progress) {
    float color[4];
    glGetFloatv(GL_CURRENT_COLOR, color);
    glColor4f(1.0, 1.0, 1.0, color[3]*progress);
}