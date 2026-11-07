#include "services.h"

void fn_0019fbd8(MaterialTexture *texture)
{
    static const MaterialWord formats[14] = {7, 8, 9, 5, 6, 3, 1, 2, 4, 0, 12, 13, 10, 11};
    static const MaterialWord wrapping[3] = {0, 2, 3};
    static const MaterialWord filtering[2] = {0, 3};
    MaterialWord config = texture->words[2];
    MaterialWord format = (config >> 8) & 255;
    if (format < 14)
        texture->words[7] = formats[format];
    MaterialWord minification = filtering[(config >> 4) & 7];
    MaterialWord s = wrapping[config & 3];
    MaterialWord t = wrapping[(config >> 2) & 3];
    MaterialWord dimensions = texture->words[4];
    if (config & 0x30000)
        texture->words[6] = dimensions;
    else {
        texture->words[6] = (dimensions >> 16) | (dimensions << 16);
        MaterialWord swap = s;
        s = t;
        t = swap;
    }
    texture->words[5] = ((config >> 7) & 1) << 1 |
        ((minification == 3 || minification == 4 || minification == 5) ? 4u : 0u) |
        (texture->words[7] == 12 ? 32u : 0u) | s << 8 | t << 12 |
        ((minification == 2 || minification == 5) ? 0x1000000u : 0u);
}
MaterialTexture *fn_005525ac(MaterialTexture *texture)
{
    texture->words[0] = 0;
    texture->words[1] = 0;
    texture->words[2] = (texture->words[2] & 0xfffc0000u) | 0xe90;
    texture->words[3] = 0;
    texture->words[4] = 0;
    fn_0019fbd8(texture);
    return texture;
}
void fn_0019501c(MaterialTexture *texture, const MaterialTextureResource *resource)
{
    if (!resource)
        return;
    texture->words[0] = resource->image;
    texture->words[1] = resource->width | (MaterialWord)resource->height << 16;
    texture->words[2] = (texture->words[2] & ~0x0003ff00u) |
        (MaterialWord)resource->format << 8 | (MaterialWord)(resource->layout & 3) << 16;
    texture->words[3] = resource->alternateImage;
    texture->words[4] = resource->originalWidth | (MaterialWord)resource->originalHeight << 16;
    fn_0019fbd8(texture);
}
void fn_0019fbb0(MaterialTexture *texture, MaterialWord s, MaterialWord t)
{
    texture->words[2] = (texture->words[2] & ~15u) | (s & 3) | (t & 3) << 2;
    fn_0019fbd8(texture);
}
void fn_005524ec(MaterialTexture *texture, MaterialWord minification, MaterialWord magnification)
{
    texture->words[2] = (texture->words[2] & ~240u) | (minification & 7) << 4 | (magnification & 1) << 7;
    fn_0019fbd8(texture);
}
