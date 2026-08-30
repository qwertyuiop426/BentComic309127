#include <vector>
#include <GLES3/gl32.h>

void renderLODChunks(const std::vector<GLuint>& visibleSSBOs, GLuint shaderProgram) {
    glUseProgram(shaderProgram);
    glDepthMask(GL_FALSE);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    for (GLuint ssbo : visibleSSBOs) {
        glBindBufferBase(GL_SHADER_STORAGE_BUFFER, 0, ssbo);
        glDrawArrays(GL_POINTS, 0, 1000); // Заглушка
    }

    glDepthMask(GL_TRUE);
    glUseProgram(0);
}
