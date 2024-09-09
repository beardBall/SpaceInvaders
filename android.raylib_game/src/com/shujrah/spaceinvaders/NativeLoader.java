package com.shujrah.spaceinvaders;

public class NativeLoader extends android.app.NativeActivity {
    static {
        System.loadLibrary("main");
    }
}
