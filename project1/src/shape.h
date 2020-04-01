#ifndef _CSCI441_SHAPE_H_
#define _CSCI441_SHAPE_H_

#include <cstdlib>
#include <vector>

#define _USE_MATH_DEFINES
#include <cmath>

struct Vertex {
    double x, y, z, u, v;
};

template <typename T>
void add_vertex(T& coords, const Vertex& v) {
    coords.push_back(v.x);
    coords.push_back(v.y);
    coords.push_back(v.z);
    coords.push_back(v.u);
    coords.push_back(v.v);
}

template <typename T>
void add_triangle(T& coords, const Vertex& v1, const Vertex& v2, const Vertex& v3) {
    add_vertex(coords, v1);
    add_vertex(coords, v2);
    add_vertex(coords, v3);
}

class Shape {
protected:
    std::vector<float> coords;
public:
    size_t size() const {
        return sizeof(float) * coords.size();
    }

    const float* data() const {
        return coords.data();
    }
};

class Cube : public Shape {
public:
    Cube() {
        /**
         * TODO: Part1: update the shape to have texture coordinates.
         */
        coords = {
            // x, y, z, u, v
            // back
            -0.5f, -0.5f, -0.5f, 0.0f, 0.0f,
             0.5f, -0.5f, -0.5f, 1.0f, 0.0f,
             0.5f,  0.5f, -0.5f, 1.0f, 1.0f,
             0.5f,  0.5f, -0.5f, 1.0f, 1.0f,
            -0.5f,  0.5f, -0.5f, 0.0f, 1.0f,
            -0.5f, -0.5f, -0.5f, 0.0f, 0.0f,

            // front
            -0.5f, -0.5f,  0.5f, 0.0f, 0.0f,
             0.5f, -0.5f,  0.5f, 1.0f, 0.0f,
             0.5f,  0.5f,  0.5f, 1.0f, 1.0f,
             0.5f,  0.5f,  0.5f, 1.0f, 1.0f,
            -0.5f,  0.5f,  0.5f, 0.0f, 1.0f,
            -0.5f, -0.5f,  0.5f, 0.0f, 0.0f,

            // left
            -0.5f,  0.5f,  0.5f, 0.0f, 0.0f,
            -0.5f,  0.5f, -0.5f, 1.0f, 0.0f,
            -0.5f, -0.5f, -0.5f, 1.0f, 1.0f,
            -0.5f, -0.5f, -0.5f, 1.0f, 1.0f,
            -0.5f, -0.5f,  0.5f, 0.0f, 1.0f,
            -0.5f,  0.5f,  0.5f, 0.0f, 0.0f,

            // right
             0.5f,  0.5f,  0.5f, 0.0f, 0.0f,
             0.5f,  0.5f, -0.5f, 1.0f, 0.0f,
             0.5f, -0.5f, -0.5f, 1.0f, 1.0f,
             0.5f, -0.5f, -0.5f, 1.0f, 1.0f,
             0.5f, -0.5f,  0.5f, 0.0f, 1.0f,
             0.5f,  0.5f,  0.5f, 0.0f, 0.0f,

             // bottom
            -0.5f, -0.5f, -0.5f, 0.0f, 0.0f,
             0.5f, -0.5f, -0.5f, 1.0f, 0.0f,
             0.5f, -0.5f,  0.5f, 1.0f, 1.0f,
             0.5f, -0.5f,  0.5f, 1.0f, 1.0f,
            -0.5f, -0.5f,  0.5f, 0.0f, 1.0f,
            -0.5f, -0.5f, -0.5f, 0.0f, 0.0f,

            // top
           -0.5f,  0.5f, -0.5f, 0.0f, 0.0f,
            0.5f,  0.5f, -0.5f, 1.0f, 0.0f,
            0.5f,  0.5f,  0.5f, 1.0f, 1.0f,
            0.5f,  0.5f,  0.5f, 1.0f, 1.0f,
           -0.5f,  0.5f,  0.5f, 0.0f, 1.0f,
           -0.5f,  0.5f, -0.5f, 0.0f, 0.0f,
        };
    }
};


class Sphere : public Shape {
    float M_PI = 3.14159265;

    double x(float r, float phi, float theta) {
        return r * cos(theta) * sin(phi);
    }

    double y(float r, float phi, float theta) {
        return -r * cos(phi);
    }

    double z(float r, float phi, float theta) {
        return -r * sin(theta) * sin(phi);
    }

    Vertex vertex(float radius, float phi, float theta) {
        Vertex vert;
        vert.x = x(radius, phi, theta);
        vert.y = y(radius, phi, theta);
        vert.z = z(radius, phi, theta);
        /**
         * TODO: PART4 compute the texture coordinates for the sphere
         */

        float atheta;
        //theta = atan((-vert.z / vert.x));
        //atheta = acos(-vert.y / radius); //Lol didn't even need these. 


        //Paramterization
        vert.u = (theta + M_PI) / 2*radius; //This calculation comes from the notes. 
        vert.v = phi / M_PI;
        return vert;
    }

public:
    Sphere(unsigned int n, float radius) {
        int n_steps = n;
        
        double phi_step_size = M_PI / n_steps;
        double theta_step_size = 2 * M_PI / n_steps;

        for (int j = 0; j < n_steps; ++j) {
            for (int i = 0; i < n_steps; ++i) {
                double phi_i = i * phi_step_size;
                double phi_ip1 = (i + 1) * phi_step_size;
                double theta_j = -M_PI + j * theta_step_size;
                double theta_jp1 = -M_PI + (j + 1) * theta_step_size;

                Vertex vij = vertex(radius, phi_i, theta_j);
                Vertex vip1j = vertex(radius, phi_ip1, theta_j);
                Vertex vijp1 = vertex(radius, phi_i, theta_jp1);
                Vertex vip1jp1 = vertex(radius, phi_ip1, theta_jp1);

                add_triangle(coords, vij, vip1j, vijp1);
                add_triangle(coords, vijp1, vip1jp1, vip1j);
            }
        }
    }
};

#endif
