﻿/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_yuekong_remote_service_DecodeService */

#ifndef _Included_com_yuekong_remote_service_DecodeService
#define _Included_com_yuekong_remote_service_DecodeService
#ifdef __cplusplus
extern "C" {
#endif
#undef com_yuekong_remote_service_DecodeService_BIND_ABOVE_CLIENT
#define com_yuekong_remote_service_DecodeService_BIND_ABOVE_CLIENT 8L
#undef com_yuekong_remote_service_DecodeService_BIND_ADJUST_WITH_ACTIVITY
#define com_yuekong_remote_service_DecodeService_BIND_ADJUST_WITH_ACTIVITY 128L
#undef com_yuekong_remote_service_DecodeService_BIND_ALLOW_OOM_MANAGEMENT
#define com_yuekong_remote_service_DecodeService_BIND_ALLOW_OOM_MANAGEMENT 16L
#undef com_yuekong_remote_service_DecodeService_BIND_AUTO_CREATE
#define com_yuekong_remote_service_DecodeService_BIND_AUTO_CREATE 1L
#undef com_yuekong_remote_service_DecodeService_BIND_DEBUG_UNBIND
#define com_yuekong_remote_service_DecodeService_BIND_DEBUG_UNBIND 2L
#undef com_yuekong_remote_service_DecodeService_BIND_IMPORTANT
#define com_yuekong_remote_service_DecodeService_BIND_IMPORTANT 64L
#undef com_yuekong_remote_service_DecodeService_BIND_NOT_FOREGROUND
#define com_yuekong_remote_service_DecodeService_BIND_NOT_FOREGROUND 4L
#undef com_yuekong_remote_service_DecodeService_BIND_WAIVE_PRIORITY
#define com_yuekong_remote_service_DecodeService_BIND_WAIVE_PRIORITY 32L
#undef com_yuekong_remote_service_DecodeService_CONTEXT_IGNORE_SECURITY
#define com_yuekong_remote_service_DecodeService_CONTEXT_IGNORE_SECURITY 2L
#undef com_yuekong_remote_service_DecodeService_CONTEXT_INCLUDE_CODE
#define com_yuekong_remote_service_DecodeService_CONTEXT_INCLUDE_CODE 1L
#undef com_yuekong_remote_service_DecodeService_CONTEXT_RESTRICTED
#define com_yuekong_remote_service_DecodeService_CONTEXT_RESTRICTED 4L
#undef com_yuekong_remote_service_DecodeService_MODE_APPEND
#define com_yuekong_remote_service_DecodeService_MODE_APPEND 32768L
#undef com_yuekong_remote_service_DecodeService_MODE_ENABLE_WRITE_AHEAD_LOGGING
#define com_yuekong_remote_service_DecodeService_MODE_ENABLE_WRITE_AHEAD_LOGGING 8L
#undef com_yuekong_remote_service_DecodeService_MODE_MULTI_PROCESS
#define com_yuekong_remote_service_DecodeService_MODE_MULTI_PROCESS 4L
#undef com_yuekong_remote_service_DecodeService_MODE_PRIVATE
#define com_yuekong_remote_service_DecodeService_MODE_PRIVATE 0L
#undef com_yuekong_remote_service_DecodeService_MODE_WORLD_READABLE
#define com_yuekong_remote_service_DecodeService_MODE_WORLD_READABLE 1L
#undef com_yuekong_remote_service_DecodeService_MODE_WORLD_WRITEABLE
#define com_yuekong_remote_service_DecodeService_MODE_WORLD_WRITEABLE 2L
#undef com_yuekong_remote_service_DecodeService_START_CONTINUATION_MASK
#define com_yuekong_remote_service_DecodeService_START_CONTINUATION_MASK 15L
#undef com_yuekong_remote_service_DecodeService_START_FLAG_REDELIVERY
#define com_yuekong_remote_service_DecodeService_START_FLAG_REDELIVERY 1L
#undef com_yuekong_remote_service_DecodeService_START_FLAG_RETRY
#define com_yuekong_remote_service_DecodeService_START_FLAG_RETRY 2L
#undef com_yuekong_remote_service_DecodeService_START_NOT_STICKY
#define com_yuekong_remote_service_DecodeService_START_NOT_STICKY 2L
#undef com_yuekong_remote_service_DecodeService_START_REDELIVER_INTENT
#define com_yuekong_remote_service_DecodeService_START_REDELIVER_INTENT 3L
#undef com_yuekong_remote_service_DecodeService_START_STICKY
#define com_yuekong_remote_service_DecodeService_START_STICKY 1L
#undef com_yuekong_remote_service_DecodeService_START_STICKY_COMPATIBILITY
#define com_yuekong_remote_service_DecodeService_START_STICKY_COMPATIBILITY 0L
/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaACLibOpen
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_yuekong_remote_service_DecodeService_irdaACLibOpen
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaACControl
 * Signature: (Lcom/yuekong/remote/bean/jnibean/JNIACStatus;II)[I
 */
JNIEXPORT jintArray JNICALL Java_com_yuekong_remote_service_DecodeService_irdaACControl
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaACLibClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_yuekong_remote_service_DecodeService_irdaACLibClose
  (JNIEnv *, jobject);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaACGetTemperatureRange
 * Signature: (I)Lcom/yuekong/remote/bean/jnibean/JNITemperatureRange;
 */
JNIEXPORT jobject JNICALL Java_com_yuekong_remote_service_DecodeService_irdaACGetTemperatureRange
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaACGetSupportedMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_yuekong_remote_service_DecodeService_irdaACGetSupportedMode
  (JNIEnv *, jobject);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaACGetSupportedWindSpeed
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_yuekong_remote_service_DecodeService_irdaACGetSupportedWindSpeed
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaACGetSupportedSwing
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_yuekong_remote_service_DecodeService_irdaACGetSupportedSwing
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaACGetSupportedWindDirection
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_yuekong_remote_service_DecodeService_irdaACGetSupportedWindDirection
  (JNIEnv *, jobject);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaTVLibOpen
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_yuekong_remote_service_DecodeService_irdaTVLibOpen
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaTVControl
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_com_yuekong_remote_service_DecodeService_irdaTVControl
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    irdaTVLibClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_yuekong_remote_service_DecodeService_irdaTVLibClose
  (JNIEnv *, jobject);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    bcLibOpen
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_yuekong_remote_service_DecodeService_bcLibOpen
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    bcGetNeedConnAck
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_yuekong_remote_service_DecodeService_bcGetNeedConnAck
  (JNIEnv *, jobject);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    bcGetDeviceName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_yuekong_remote_service_DecodeService_bcGetDeviceName
  (JNIEnv *, jobject);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    bcGetValidKeys
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_com_yuekong_remote_service_DecodeService_bcGetValidKeys
  (JNIEnv *, jobject);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    bcLibClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_yuekong_remote_service_DecodeService_bcLibClose
  (JNIEnv *, jobject);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    bcGetConnAck
 * Signature: ()Lcom/yuekong/remote/bean/jnibean/JNIBCCommands;
 */
JNIEXPORT jobject JNICALL Java_com_yuekong_remote_service_DecodeService_bcGetConnAck
  (JNIEnv *, jobject);

/*
 * Class:     com_yuekong_remote_service_DecodeService
 * Method:    bcGetCommand
 * Signature: (I)Lcom/yuekong/remote/bean/jnibean/JNIBCCommands;
 */
JNIEXPORT jobject JNICALL Java_com_yuekong_remote_service_DecodeService_bcGetCommand
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_yuekong_remote_service_DecodeService_LocalBinder */

#ifndef _Included_com_yuekong_remote_service_DecodeService_LocalBinder
#define _Included_com_yuekong_remote_service_DecodeService_LocalBinder
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif