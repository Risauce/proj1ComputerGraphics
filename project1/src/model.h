#pragma once
#ifndef _CSCI441_MODEL_H_
#define _CSCI441_MODEL_H_

class Model {

public:
    GLuint vbo;
    GLuint vao;
    GLuint ebo;
    Shader shader;
    Matrix4 model;
    int size;
    int indSize;

    template <typename Coords, typename Indices>
    Model(const Coords& coords, const Indices& indicies, const Shader& shader_in) : shader(shader_in) {
        size = coords.size() * sizeof(float);
        indSize = indicies.size() * sizeof(int);

        //ebo:
        glGenBuffers(1, &ebo);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, indSize, indicies.data(), GL_DYNAMIC_DRAW);

        // copy vertex data
        glGenBuffers(1, &vbo);
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glBufferData(GL_ARRAY_BUFFER, size, coords.data(), GL_STATIC_DRAW);

        // describe vertex layout
        glGenVertexArrays(1, &vao);
        glBindVertexArray(vao);

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(float),
            (void*)(0 * sizeof(float)));
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(float),
            (void*)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);

        glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(float),
            (void*)(6 * sizeof(float)));
        glEnableVertexAttribArray(2);
    }
};



#endif
