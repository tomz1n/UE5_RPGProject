#pragma once

#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, true);
#define DRAW_SPHERE_SINGLEFRAME(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, false, -1.f);
#define DRAW_SPHERE(Location, Color) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, Color, true);
#define DRAW_LINE(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);
#define DRAW_LINE_SINGLEFRAME(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, -1.f, 0, 1.f);
#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Green, true);
#define DRAW_POINT_SINGLEFRAME(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Green, false, -1.f);
#define DRAW_VECTOR(StartLocation, EndLocation) if(GetWorld()) \
{ \
DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f); \
DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Green, true); \
}
#define DRAW_VECTOR_SINGLEFRAME(StartLocation, EndLocation) if(GetWorld()) \
{ \
DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, -1.f, 0, 1.f); \
DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Green, false, -1.f); \
}
