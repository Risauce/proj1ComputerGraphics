#version 330 core

in vec2 ourTexCoord;

out vec4 fragColor;

/**
 * TODO: PART-1 update the fragment shader to get the texture coordinates from
 * the vertex shader
 * DONE
 */

 uniform sampler2D ourTexture;

/**
 * TODO: PART-3 update the fragment shader to get the fragColor color from the
 * texture, and add the sampler2D.
 * DONE
 */



void main() {
    //vec4 color = texture(ourTexture, ourTexCoord); 

    //fragColor = vec4(ourTexCoord.x, ourTexCoord.y, 0, 1); //The weird box.
    fragColor = texture(ourTexture, ourTexCoord); //Set the texture color with the texcoords. 
}
