#include <cmath>

struct Plane {
    float x, y, z, w;
};

struct Frustum {
    Plane planes[6];
};

bool isAABBInFrustum(const Frustum& frustum, float minX, float minY, float minZ, float maxX, float maxY, float maxZ) {
    for (int i = 0; i < 6; ++i) {
        const Plane& p = frustum.planes[i];
        float px = (p.x > 0.0f) ? maxX : minX;
        float py = (p.y > 0.0f) ? maxY : minY;
        float pz = (p.z > 0.0f) ? maxZ : minZ;
        if (p.x * px + p.y * py + p.z * pz + p.w < 0.0f) {
            return false;
        }
    }
    return true;
}
