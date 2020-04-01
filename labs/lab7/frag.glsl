#version 330 core

out vec4 fragColor;

/**
 * TODO: PART-1 update the fragment shader to get the texture coordinates from
 * the vertex shader
 */
in vec2 ourTexCoord;
out vec3 color;

uniform sampler2D ourTexture;

/**
 * TODO: PART-3 update the fragment shader to get the fragColor color from the
 * texture, and add the sampler2D.
 */

void main() {
    //fragColor = vec4(1, 0, 0, 1);

    /*step1*/
    //fragColor = vec4(ourTexCoord.x, ourTexCoord.y, 0,1);

    fragColor = texture(ourTexture, ourTexCoord);

}
