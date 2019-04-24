#include "operations.h"
namespace fgal{
    namespace operations{
        float points_distance(types::Point2D p1, types::Point2D p2){
            return sqrt(
                pow(p2.x-p1.x, 2)  +  pow(p2.y-p1.x,2)
                );
        }
    }
}