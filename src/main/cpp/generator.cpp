#include <vector>
#include <cstdint>

struct VoxelData {
    uint32_t positionData;
    uint32_t colorData;
};

VoxelData packVoxel(uint32_t x, uint32_t y, uint32_t z, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    VoxelData data;
    data.positionData = (x & 0x3FF) | ((y & 0x3FF) << 10) | ((z & 0x3FF) << 20);
    data.colorData = (r << 24) | (g << 16) | (b << 8) | a;
    return data;
}

std::vector<VoxelData> generateLODSection(const short* blockData, int lodLevel) {
    std::vector<VoxelData> result;
    // Заглушка: возвращаем пустой вектор
    return result;
}
