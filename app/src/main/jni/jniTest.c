//
// Created by Administrator on 2017/4/25.
//

#include "com_jokerpeng_demo_ndkdemo_JniUtils.h"
JNIEXPORT jstring JNICALL Java_com_jokerpeng_demo_ndkdemo_JniUtils_getJniString
  (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env,"Hello Jni!");
  }