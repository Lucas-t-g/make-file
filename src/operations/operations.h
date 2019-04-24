#ifndef OPERATIONS_H
#define OPERATIONS_H
#include "types/point2D.h"

namespace fgal{
    namespace operations{
        float distance(types::Point2D, types::Point2D);
        types::Vector2D vector_sum(types::Vector2D, types::Vector2D);        
    }
}
#endif