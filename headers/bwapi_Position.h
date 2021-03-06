/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bwapi_Position */

#ifndef _Included_bwapi_Position
#define _Included_bwapi_Position
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bwapi_Position
 * Method:    isValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Position_isValid
  (JNIEnv *, jobject);

/*
 * Class:     bwapi_Position
 * Method:    makeValid
 * Signature: ()Lbwapi/Position;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Position_makeValid
  (JNIEnv *, jobject);

/*
 * Class:     bwapi_Position
 * Method:    getDistance
 * Signature: (Lbwapi/Position;)D
 */
JNIEXPORT jdouble JNICALL Java_bwapi_Position_getDistance
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bwapi_Position
 * Method:    getApproxDistance
 * Signature: (Lbwapi/Position;)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Position_getApproxDistance
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bwapi_Position
 * Method:    getLength
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_bwapi_Position_getLength
  (JNIEnv *, jobject);

/*
 * Class:     bwapi_Position
 * Method:    hasPath
 * Signature: (Lbwapi/Position;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Position_hasPath
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
