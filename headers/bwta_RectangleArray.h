/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bwta_RectangleArray */

#ifndef _Included_bwta_RectangleArray
#define _Included_bwta_RectangleArray
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bwta_RectangleArray
 * Method:    getItem_native
 * Signature: (JII)D
 */
JNIEXPORT jdouble JNICALL Java_bwta_RectangleArray_getItem_1native
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwta_RectangleArray
 * Method:    getItemSafe_native
 * Signature: (JII)D
 */
JNIEXPORT jdouble JNICALL Java_bwta_RectangleArray_getItemSafe_1native
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwta_RectangleArray
 * Method:    setItem_native
 * Signature: (JIID)V
 */
JNIEXPORT void JNICALL Java_bwta_RectangleArray_setItem_1native
  (JNIEnv *, jobject, jlong, jint, jint, jdouble);

/*
 * Class:     bwta_RectangleArray
 * Method:    resize_native
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_bwta_RectangleArray_resize_1native
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwta_RectangleArray
 * Method:    saveToFile_native
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bwta_RectangleArray_saveToFile_1native
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     bwta_RectangleArray
 * Method:    setTo_native
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_bwta_RectangleArray_setTo_1native
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     bwta_RectangleArray
 * Method:    setBorderTo_native
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_bwta_RectangleArray_setBorderTo_1native
  (JNIEnv *, jobject, jlong, jdouble);

#ifdef __cplusplus
}
#endif
#endif
