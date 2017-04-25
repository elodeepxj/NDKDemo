package com.jokerpeng.demo.ndkdemo;

/**
 * Created by Administrator on 2017/4/25.
 */
public class JniUtils {
    static {
        System.loadLibrary("JniDemo");
    }

    public native String getJniString();
}
