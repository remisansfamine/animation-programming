#include <iostream>

#include "../../Include/Maths/Matrix.h"

namespace Maths
{
    /*========================    Matrix 4    =========================*/

    Mat4x4 scale(const Vector3f& scale)
    {
        return {
            scale.x, 0.f, 0.f, 0.f,
            0.f, scale.y, 0.f, 0.f,
            0.f, 0.f, scale.z, 0.f,
            0.f, 0.f, 0.f, 1.f,
        };
    }

    //  Translation
    Mat4x4 translate(const Vector3f& a)
    {
        //  Return 4x4 matrix
        return {
            1.f ,   0.f ,   0.f ,   a.x ,
            0.f ,   1.f ,   0.f ,   a.y ,
            0.f ,   0.f ,   1.f ,   a.z ,
            0.f ,   0.f ,   0.f ,   1.f ,
        };
    }
}
