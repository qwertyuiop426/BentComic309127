package com.example.lodmod;

import net.fabricmc.api.ClientModInitializer;
import net.fabricmc.fabric.api.client.rendering.v1.WorldRenderEvents;

public class LodModClient implements ClientModInitializer {
    @Override
    public void onInitializeClient() {
        System.loadLibrary("lodengine");
        WorldRenderEvents.LAST.register(context -> {
            float[] modelView = context.matrixStack().peek().getPositionMatrix().writeToArray(new float[16]);
            float[] projection = context.projectionMatrix().writeToArray(new float[16]);
            NativeRenderer.renderLODs(modelView, projection);
        });
    }
}
