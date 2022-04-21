#include <iostream>
#include "funcs.h"

int main()
{
    invert("TaskA.pgm");
    invertHalf("TaskB.pgm");
    whiteBox("TaskC.pgm");
    whiteBoxOutline("TaskD.pgm");
    scale("TaskE.pgm");
    pixelate("TaskF.pgm");

    return 0;

}
