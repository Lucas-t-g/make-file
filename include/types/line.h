namespace fgal{
    namespace types{
        struct line{
            point2D p1;
            point2D p2;
            line(Point2D _p1, Point _p2) : p1(_p1), p2(_p2) {}
        }
    }
}