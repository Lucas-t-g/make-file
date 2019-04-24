#ifndef POINT_2D
#define POINT_2D
namespace fgal{
    namespace types{
        namespace two{
            struct point2D{
                int x, y;
                point2D :: point2D(int _x, int _y) : x(_x), y(_y) {}
            };
        }
    }
}
#endif