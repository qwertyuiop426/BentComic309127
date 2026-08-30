package com.example.lodmod;

public class NativeRenderer {
    public static native void renderLODs(float[] modelViewMatrix, float[] projectionMatrix);
    public static native void queueChunkForLOD(int chunkX, int chunkZ, short[] blockIds);
    public static native void onContextLost();
}
