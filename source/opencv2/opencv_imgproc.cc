#include "../../php_opencv.h"
#include <opencv2/imgproc.hpp>


void opencv_imgproc_init(int module_number)
{

    //color conversion code in CV\cvtColor
    //!< add alpha channel to RGB or BGR image, equal to 0
    REGISTER_LONG_CONSTANT("COLOR_BGR2BGRA", COLOR_BGR2BGRA, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("COLOR_RGB2RGBA", COLOR_RGB2RGBA, CONST_CS | CONST_PERSISTENT);

    //!< remove alpha channel from RGB or BGR image, equal to 1
    REGISTER_LONG_CONSTANT("COLOR_BGRA2BGR", COLOR_BGRA2BGR, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("COLOR_RGBA2RGB", COLOR_RGBA2RGB, CONST_CS | CONST_PERSISTENT);

    //!< convert between RGB and BGR color spaces (with or without alpha channel) ,equal to 2
    REGISTER_LONG_CONSTANT("COLOR_BGR2RGBA", COLOR_BGR2RGBA, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("COLOR_RGB2BGRA", COLOR_RGB2BGRA, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("COLOR_RGBA2BGR", COLOR_RGBA2BGR, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("COLOR_BGRA2RGB", COLOR_BGRA2RGB, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("COLOR_BGR2RGB", COLOR_BGR2RGB, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("COLOR_RGB2BGR", COLOR_RGB2BGR, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("COLOR_BGRA2RGBA", COLOR_BGRA2RGBA, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("COLOR_RGBA2BGRA", COLOR_RGBA2BGRA, CONST_CS | CONST_PERSISTENT);

    //!< convert between RGB/BGR and grayscale, @ref color_convert_rgb_gray "color conversions",equal to 6
    REGISTER_LONG_CONSTANT("COLOR_BGR2GRAY", COLOR_BGR2GRAY, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("COLOR_RGB2GRAY", COLOR_RGB2GRAY, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("COLOR_GRAY2BGR", COLOR_GRAY2BGR, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("COLOR_GRAY2RGB", COLOR_GRAY2RGB, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("COLOR_GRAY2BGRA", COLOR_GRAY2BGRA, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("COLOR_GRAY2RGBA", COLOR_GRAY2RGBA, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("COLOR_BGRA2GRAY", COLOR_BGRA2GRAY, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("COLOR_RGBA2GRAY", COLOR_RGBA2GRAY, CONST_CS | CONST_PERSISTENT);

}