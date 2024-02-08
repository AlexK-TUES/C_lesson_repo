#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H

struct QuadraticRootsResult{
    double x1,x2;
    int norealroots;
    };

int findroots(double a, double b, double c);

#endif